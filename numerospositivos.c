int main(){

    int numeroescolhido;

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numeroescolhido);

    for(int i = 1; i < numeroescolhido; i++){
        if(i % 2 != 0) {
            printf("Os numeros impares menores que %d sao: %d \n", numeroescolhido, i);
        }

    }
}