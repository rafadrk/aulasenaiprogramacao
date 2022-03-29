#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int base;
    int altura;

    printf("Digite a base do quadrado em cm: \n");
    scanf("%d", &base);
    printf("Digite a altura do quadrado em cm: \n");
    scanf("%d", &altura);

    printf("\nArea do quadrado: %d", base * altura);

    printf("\nO perimetro do quadrado: %d", base + altura + base + altura);
}
