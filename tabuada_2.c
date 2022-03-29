#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUNÇÃO)
#include <stdlib.h>
#include <time.h>
#include <string.h>

void abertura(int multiplicador){
    //aqui não enxergamos a variavel multiplicador.
    //e sei valor será definido por quem chamar essa função.
    printf("Tabuada do: \n");
}

int main(){
    int multiplicador = 2;
    //passar inteiro diretamente.
    abertura(multiplicador);

    for(int i = 0; i < 10; i++){
        int resultado = multiplicador * i;
        printf("%d x %d = %d"), i, multiplicador, resultado;
    }
}