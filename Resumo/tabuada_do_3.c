#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Tabuada do número 3\n");

    for(int i = 1; i <= 10; i++){
        int numero = 3;
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}