#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int impar = 1;
    int par = 0;

    printf("digite um numero inteiro: ");
    scanf("%d", &impar, &par);

    if(impar == 1){
        printf("O número %d é impar", impar);
    } 
    if(par == 0){
        printf("O número %d é par", par);
    }


}