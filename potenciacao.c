#include <stdio.h> //INCLUINDO UMA BIBLIOTECA (UM MONTE DE FUN��O)
#include <stdlib.h>
#include <time.h>
#include <string.h>

void potencia(int a, int b){
    int resultado = 1;
        for(int i = 0; i < b; i++){
            resultado = resultado * a;
        }

   printf("%d", resultado);
}

int main(){
    int a;
    int b;

    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &a);
    printf("Digite o segundo n�mero\n");
    scanf("%d", &b);
    
    potencia(a, b);
}