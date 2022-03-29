
int main(){

    int n1;
    int n2;

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Voce devera digitar dois numeros interos diferentes\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("A diferenca do maior pelo menor numero eh de: %d", n1 - n2);
    } else if (n2 > n1){
        printf("A diferenca do maior pelo menor numero eh de: %d", n2 - n1);
    } else {
        printf("Eita amigao vc quebrou a matrix: %d", n1 - n2);
    }
}
