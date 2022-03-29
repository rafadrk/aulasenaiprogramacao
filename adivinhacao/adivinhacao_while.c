#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>

int main(){
    //IMPRIME O CABE�ALHO DO JOGO
    printf("***************************************************\n");
    printf("****** Bem vindo ao nosso jogo de advinhacao ******\n");
    printf("***************************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numeropensado = numerogrande % 100;
    int numerodetentativas = 5;

    int chute;
    int ganhou = 0;
    int acertou = (chute == numeropensado);

    int tentativas = ganhou + 1;
    double pontos = 1000;

    printf("O numero e: %d", numeropensado);

    for(int ganhou = 0; ganhou < acertou; ganhou++ ){
        //printf("Vari�vel numero grande e: %d\n", numerogrande);
        printf("\nTentativa %d\n", numerodetentativas);
        printf("Qual o seu chute? ");
        scanf("%d", &chute);        
        printf("Seu chute foi %d\n", chute);
        //tentativas++;
        
    if(chute == 0){
            printf("Nao e permitido o numero 0\n");                           
        } 

            else if(chute < 0){
                printf("Nao e permitido numeros negativos\n");  
                continue;   //UTILIZADO PARA QUANDO QUISERMOS CONTINUAR A EXECU��O DO LOOP SEM QUEBR�-LO, COMO O BREAK
            }        
                
            int maior = chute > numeropensado;
                        
            if(acertou){
                printf("Parabens, voce acertou! \n");
                printf("Voce acertou na tentativa %d\n", numerodetentativas - 1);
                ganhou = 1;
            } 

            else if(maior){
                printf("Seu chute foi maior que o numero secreto\n");
            }

            else{
                printf("Seu chute foi menor que o numero secreto\n");
        }
        double pontosperdidos = abs(chute - numeropensado) / (double) 2;
        pontos = pontos - pontosperdidos; 
        
    }
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas!\n", numerodetentativas - 1);
    printf("Total de pontos: %.2f\n", pontos);
                
}


//IF VAI SER O MAIOR
//ELSE VAI SER O MENOR
//FOR N TEM ;
//FOR � UMA FUN��O