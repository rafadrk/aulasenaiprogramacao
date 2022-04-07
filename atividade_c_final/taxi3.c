#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    double bb1 = 1.80;
    double bb2 = 2.30;
    int escolhebandeira;
    float kmrodado;
    double taxmin = 3.50;
    int ler;

    printf("ATENCAO: TAXA MINIMA DE TAXI = %.2f\n", taxmin);

    printf("Digite o numero da bandeira <1 ou 2>: ");
    scanf("%d", &escolhebandeira);

     if(escolhebandeira == 1){
        printf("Digite a kilometragem rodada: ");
        scanf("%f", &kmrodado);

        if(kmrodado < 1){
            printf("O valor da corrida é: %.2f", taxmin);
        }

        if(kmrodado > 1){
            float mult = (bb1 * kmrodado);
            printf("O taxi oferece desconto de 30%% ? < 1 - Sim / 2 - Nao >\n");
            scanf("%d", &ler);

            if(ler == 1){
                float multidesconto =  (mult * 70) / 100;
                printf("O valor da corrida com desconto eh: %.2f", multidesconto);
            }

            if(ler == 2){
                printf("O valor da corrida  sem desconto eh: %.2f", mult);
            }
        
        }
    }

    if(escolhebandeira == 2){
        printf("Digite a kilometragem rodada: ");
        scanf("%f", &kmrodado);

        if(kmrodado < 1){
            printf("O valor da corrida é: %.2f", taxmin);
        }

        if(kmrodado > 1){
            float mult = (bb2 * kmrodado);
            printf("O taxi oferece desconto de 30%% ? < 1 - Sim / 2 - Nao >\n");
            scanf("%d", &ler);

            if(ler == 1){
                float multidesconto =  (mult * 70) / 100;
                printf("O valor da corrida com desconto eh: %.2f", multidesconto);
            }

            if(ler == 2){
                printf("O valor da corrida  sem desconto eh: %.2f", mult);
            }
        
        }
    }

}