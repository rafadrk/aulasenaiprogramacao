#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int n1;
    int n2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    double media = (n1 + n2) / 2.0;

    printf("\n\nA soma %d + %d = %d\n", n1, n2, n1 + n2);
    printf("A subtra��o %d - %d = %d\n", n1, n2, n1 - n2);
    printf("O produto %d x %d = %d\n", n1, n2, n1 * n2);
    printf("A divis�o %d : %d = %d\n", n1, n2, n1 / n2);
    printf("A m�dia entre %d e %d � %.2f\n", n1, n2, media);

}