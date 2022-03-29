#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int n1;
    int n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    double media = (n1 + n2) / 2.0;

    printf("\n\nA soma %d + %d = %d\n", n1, n2, n1 + n2);
    printf("A subtração %d - %d = %d\n", n1, n2, n1 - n2);
    printf("O produto %d x %d = %d\n", n1, n2, n1 * n2);
    printf("A divisão %d : %d = %d\n", n1, n2, n1 / n2);
    printf("A média entre %d e %d é %.2f\n", n1, n2, media);

}