#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int idade1;
    int idade2;
    

    printf("Digite a idade de Pedro: " );
    scanf("%d", &idade1);
    printf("Digite a idade de Joana: ");
    scanf("%d", &idade2);

    int iguais = 1;

    if(idade1 > idade2){
        printf("\nPedro é mais velho.");
    }
    if(idade1 < idade2){
        printf("\nJoana é mais velha.");
    } else {
        iguais = 0;
        printf("\nPedro e Joana tem a mesma idade");
    }
}