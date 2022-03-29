#include <stdio.h>

int main(){

    int numerolimite = 101;
    printf("Numeros de 0 a 100!\n");


    for(int i = 0; i < numerolimite; i++){
        printf("%d\n", i);

        if (i >= numerolimite){
        break;
        }
    }
}