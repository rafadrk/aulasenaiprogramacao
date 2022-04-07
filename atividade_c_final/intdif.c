#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    int n1;
    int n2;
    int n3;

void crescente(){

    if (n1 < n2 && n2 < n3) {
        printf("%d %d %d", n1, n2, n3);
    }
    if (n1 < n3 && n3 < n2) {
        printf("%d %d %d", n1, n3, n2);
    }
    if (n2 < n1 && n1 < n3) {
        printf("%d %d %d", n2, n1, n3);
    }
    if(n2 < n3 && n3 < n1){
        printf("%d %d %d", n2, n3, n1);
    }
    if (n3 < n1 && n1 < n2) {
        printf("%d %d %d", n3, n1, n2);
    }
    if(n3 < n2 && n2 < n1){
        printf("%d %d %d", n3, n2, n1);
    }

}

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite tres numeros diferentes: \n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Na ordem crescente os numero sao: ");

    crescente();

}