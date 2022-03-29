#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");
        //imprime o cabe�alho da adivinha��o
    
    //int numerotentativas = 5;
        //numero de tentativas do jogo
    int numerosecreto = 42;
        //numero que teremeos que adivinhar
    int chute;
        //variaveis inteiras, ou seja, s� n�meros

    for(int i = 0; i <= NUMERO_DE_TENTATIVAS; i++){

        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual � o seu chute?");
        scanf( "%d", &chute);
        
        if (chute < 0){
            printf("Voc� digitou um numero errado!\n");
            i--;
            continue;
        }
        
        printf("Seu chute foi o n�mero %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        printf("Acertou: %d\n", acertou);

        if(acertou){
            printf("\nBoa!!!! voc� acertou!!!\n");
            printf("\nJogue outra vez, voc� � bom!\n");
            //parar a execu��o do for
            break;
        }
        else if (menor){
            printf("\nO n�mero pensado � menor que o numero secreto\n");
        } 
        else if (maior){
            printf("\nO n�mero pensado � maior que o numero secreto\n");
        }
    }    
}
