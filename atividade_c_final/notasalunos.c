#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    float maior = 0;
    float menor = 10;
    float numeros;
    float soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite a %d nota: ", i);
        scanf("%f", &numeros);

        soma = soma + numeros;

        if(i == 1){
            maior = numeros;
            menor = numeros;
        } else {
                if (numeros > maior){
                    maior = numeros;
            }else{
                if(numeros < menor){
                    menor = numeros;
                }
            }   
        }
    }
        float media = soma / 10;
        printf("A soma das notas eh: %.1f\n", soma);
        printf("A media das notas fornecidas eh: %.1f\n", media);
        printf("O maior numero é %.1f\n", maior);
        printf("O menor numero é %.1f\n", menor);
        return 0;
}