#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeroescolhido;

    printf("Seja bem-vindo � tabuada digital!\n");
    scanf("%d", &numeroescolhido);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numeroescolhido, i, numeroescolhido * i);
    }
}