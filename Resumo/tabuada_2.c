#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int numero;

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite o número escolhido:");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}