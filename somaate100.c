#include <stdio.h>

int main(){

    int numeroprimeiro = 0;
    int somanumero = 0;

    printf("Soma dos numeros de 1 a 100!\n");

    //while(numeroprimeiro <= 99){
        //numeroprimeiro++;
        //somanumero = somanumero + numeroprimeiro;
        //printf("%d\n", somanumero);

    //}

    for(int i = 1; i <= 100; i++){
        somanumero = somanumero + i;
        printf("%d\n", somanumero);

    }
}    