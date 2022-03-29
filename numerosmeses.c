
int main(){
    int numeroescolhido;

        printf("\nEscola Senai 'Euclides Facchini' Votuporanga\n");
        printf("Dev: Rafael Casteletti Rosa\n\n");

        printf("Digite um número inteiro de 1 a 12 correspondente ao mes desejado: ");
        scanf("%d", &numeroescolhido);

    if(numeroescolhido == 1){
        printf("O número corresponde ao mes de Janeiro");
    }
    if(numeroescolhido == 2){
        printf("O número corresponde ao mes de Fevereiro");
    }
    if(numeroescolhido == 3){
        printf("O número corresponde ao mes de Marco");
    }
    if(numeroescolhido == 4){
        printf("O número corresponde ao mes de Abril");
    }
    if(numeroescolhido == 5){
        printf("O número corresponde ao mes de Maio");
    }
    if(numeroescolhido == 6){
        printf("O número corresponde ao mes de Junho");
    }
    if(numeroescolhido == 7){
        printf("O número corresponde ao mes de Julho");
    }
    if(numeroescolhido == 8){
        printf("O número corresponde ao mes de Agosto");
    }
    if(numeroescolhido == 9){
        printf("O número corresponde ao mes de Setembro");
    }
    if(numeroescolhido == 10){
        printf("O número corresponde ao mes de Outubro");
    }
    if(numeroescolhido == 11){
        printf("O número corresponde ao mes de Novembro");
    }
    if(numeroescolhido == 12){
        printf("O número corresponde ao mes de Dezembro");
    } else if ( numeroescolhido > 12) {
        printf("Calma la amigao, se ta digitando mes q nem existe >:/");
    }

}