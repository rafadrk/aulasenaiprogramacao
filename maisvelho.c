int main(){

    int idade1;
    int idade2;
    int idade3;

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite a idade de Pedro: ");
    scanf("%d", &idade1);
    printf("Digite a idade de Joana: ");
    scanf("%d", &idade2);
    printf("Digite a idade de Ismael: ");
    scanf("%d", &idade3);


    if(idade1 > idade2){
        printf("\n\nPedro eh o mais velho");
    } else if(idade2 > idade3){
        printf("\n\nJoana eh a mais velha");
    } else {
        printf("\n\nIsmael eh o mais velho");
    }
}