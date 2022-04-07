#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int b1 = 1;
    int b2 = 2;
    double bb1 = 1.80;
    double bb2 = 2.30;
    int escolhebandeira;
    int kmrodado;

    printf("Digite o número da bandeira <1 ou 2>: ");
    scanf("%d", &escolhebandeira);

    if(escolhebandeira == b1){
    printf("Digite a kilometragem rodada: ");
    scanf("%d", &kmrodado);
    double mult1 = (bb1 * kmrodado);
    printf("O valor da corrida é: %.2f", mult1);
    }

    if(escolhebandeira == b2){
    printf("Digite a kilometragem rodada: ");
    scanf("%d", &kmrodado);
    double mult2 = (bb2 * kmrodado);
    printf("O valor da corrida é: %.2f", mult2);
    }







}