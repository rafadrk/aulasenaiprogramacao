#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int baseum;
    int basedois;
    int alturaum;
    int alturadois;

    printf("Digite a base do primeiro retangulo em cm: ");
    scanf("%d", &baseum);
    printf("Digite a altura do primeiro retangulo em cm: ");
    scanf("%d", &alturaum);
    printf("Digite a base do segundo retangulo em cm: ");
    scanf("%d", &basedois);
    printf("Digite a altura do primeiro retangulo em cm: ");
    scanf("%d", &alturadois);

    double resultadoum =  baseum * alturaum;
    double resultadodois = basedois * alturadois;

    printf("A area do primeiro retangulo eh de: %.2f\n ", resultadoum );
    printf("A area do segundo retangulo eh de: %.2f\n ", resultadodois );

    if(resultadoum > resultadodois){
        printf("\n\nA area do primeiro retangulo eh maior");
    } if(resultadodois > resultadoum) {
        printf("\n\nA area do segundo retangulo eh maior");
    } 
    if (resultadoum == resultadodois){
        printf("\n\nAs areas sao iguais!");
    }
    
    
}