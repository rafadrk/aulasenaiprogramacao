#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    int casos;
    int confirmados;
    int mortes;

    printf("Digite o numero de casos: ");
    scanf("%d", &casos);
    printf("Digite o numero de casos confirmados: ");
    scanf("%d", &confirmados);
    printf("Digite o numero de mortes: ");
    scanf("%d", &mortes);

    printf("\nInformacoes sobre a Dengue em Votuporanga:\n\n");

    printf("Casos Suspeitos: %d\n",  casos);
    printf("Casos Confirmados: %d\n", confirmados);
    printf("Mortes: %d\n", mortes);

    printf("\nTotal de dados: %d\n", casos + confirmados + mortes);

}