#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "forca.h"

int main (){

    FILE* f;
    f = fopen ("teste.txt", "r");

    if(f == 0){
        printf("Banco de dados n�o dispon�vel");
        exit(1);
    }

    fclose(f);
}