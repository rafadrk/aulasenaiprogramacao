#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_DE_TENTATIVAS 1

int main(){


    printf("\n      P  /_\\  P                              \n");
    printf("     /_\\_|_|_/_\\                           \n");
    printf(" n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf(" |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("|" "  |  |_|  |"  " |                         \n");
    printf("|_____| ' _ ' |_____|                         \n");
    printf("      \\__|_|__//                             \n\n");

   
    int segundos = time(0);
    srand(segundos);

        //imprime o cabeçalho da adivinhação

        //int numerotentativas = 5;
        //numero de tentativas do jogo
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
        //numero que teremeos que adivinhar
    int chute;
        //variaveis inteiras, ou seja, só números
    int ganhou = 0;
    int tentativas = 1;
    int acertou = 0;

    int nivel;
    printf("Qual eh o nivel de dificuldade que deseja escolher?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    /*if(nivel == 1){
        numerodetentativas = 20;
    }
    else if (nivel == 2){
        numerodetentativas = 15;
    }
    else{
        numerodetentativas = 6;
    }*/

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        
        case 2:
            numerodetentativas = 15;
            break;
        
        default:
            numerodetentativas = 6;
            break;
        
    }

    double pontos = 1000;
    int novospontos = pontos * 2;
    //int numerotentativas = 5;

    printf("(cheat): %d\n", numerosecreto);

    for(int i = 1; i <= numerodetentativas; i++){

        printf("Tentativa: %d\n", tentativas);
        printf("Digite seu chute: ");
        scanf( "%d", &chute);
        //tentativas++;

        if (chute < 0){
            printf("Voce digitou um numero negativo!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        printf("Acertou: %d\n\n", acertou);

        if(acertou){
            break;
        }
        else if (maior){
            printf("O numero pensado eh maior que o numero secreto\n\n");
        } 
        else {
            printf("O numero pensado eh menor que o numero secreto\n\n");
        }
        tentativas++;

            double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
                pontos = pontos - pontosperdidos; 
    }
        printf("Fim de jogo.\n\n");

        if(chute == numerosecreto){
            printf("Boa!!!! voce acertou!!!\n\n");
            printf("             OOOOOOOOOOO             \n");  
            printf("         OOOOOOOOOOOOOOOOOOO         \n");  
            printf("      OOOOOO  OOOOOOOOO  OOOOOO      \n");  
            printf("    OOOOOO      OOOOO      OOOOOO    \n"); 
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO   \n"); 
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO  \n"); 
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO   \n"); 
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO   \n");  
            printf("      OOOOOO   OOOOOOOOO   OOOOOO   \n");   
            printf("         OOOOOO         OOOOOO      \n");    
            printf("              OOOOOOOOOOO           \n\n");

            printf("Voce acertou na tentativa %d\n", tentativas);
            printf("Total de pontos: %.2f\n", pontos);
            
        }else{
            printf("Voce perdeu! Muito ruim!!!\n\n");
            printf("      \\|/ ____ \\|/       \n");
            printf("       @~/ ,. \\~@        \n"); 
            printf("      /_( \\__/ )_\\       \n");
            printf("         \\__U_/          \n\n");

            printf("O numero secreto era o: %d\n", numerosecreto);
            printf("Total de pontos: %.2f\n", pontos);

    }

}