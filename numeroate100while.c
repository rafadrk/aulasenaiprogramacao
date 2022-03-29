#include <stdio.h>

int main(){

    int numerolimite = 100;
    int numeroinicio = 0;

    printf("Numeros de 0 a 100!\n");


    while(numeroinicio < numerolimite){
        printf("%d\n", numeroinicio);
        numeroinicio++;

        if (numeroinicio >= numerolimite){
            break;
        }
    }
}    