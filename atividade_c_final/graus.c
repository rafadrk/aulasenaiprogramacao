#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

float celsius;

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite a temperatura em °Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsius * 1.8 + 32;

    printf("\n\nA temperatura em °F eh: %.2f", fahrenheit);


}