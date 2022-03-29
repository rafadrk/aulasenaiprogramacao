#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int numeros [3];

    //declarando um ponteiro que aponta para
    //o mesmo lugar que o array/ponteiro numeros
    int *ponteiro = numeros;

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    for(int i = 0; i < 3; i++){
        printf("%d ", numeros[0]);

        printf("%d ", *(ponteiro + i));
    }
}