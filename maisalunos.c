//Aluno(a): Rafael Casteletti Rosa

int main(){

    int alunos;
    int alunas;

    printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
    printf("Dev: Rafael Casteletti Rosa\n\n");

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("\nDigite a quantidade de alunas: ");
    scanf("%d", &alunas);

    if(alunos > alunas){
        printf("\n\nExistem mais alunos que alunas.");
    } else {
        printf("\n\nExistem mais alunas que alunos");
    } if(alunos == alunas) {
        printf("\n\nEita, sua sala esta perfeitamente equilibrada!");
    }
}