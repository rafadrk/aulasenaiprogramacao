#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
        //imprime o cabeçalho da adivinhação
    
    //int numerotentativas = 5;
        //numero de tentativas do jogo
    int numerosecreto = 42;
        //numero que teremeos que adivinhar
    int chute;
        //variaveis inteiras, ou seja, só números

    for(int i = 0; i <= NUMERO_DE_TENTATIVAS; i++){

        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute?");
        scanf( "%d", &chute);
        
        if (chute < 0){
            printf("Você digitou um numero errado!\n");
            i--;
            continue;
        }
        
        printf("Seu chute foi o número %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        printf("Acertou: %d\n", acertou);

        if(acertou){
            printf("\nBoa!!!! você acertou!!!\n");
            printf("\nJogue outra vez, você é bom!\n");
            //parar a execução do for
            break;
        }
        else if (menor){
            printf("\nO número pensado é menor que o numero secreto\n");
        } 
        else if (maior){
            printf("\nO número pensado é maior que o numero secreto\n");
        }
    }    
}
