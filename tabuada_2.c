#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

void abertura(int multiplicador){
    //aqui n�o enxergamos a variavel multiplicador.
    //e sei valor ser� definido por quem chamar essa fun��o.
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