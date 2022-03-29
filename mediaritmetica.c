int main(){

    int numerosescolhidos;
    int numero;
    double soma = 0;
    double conjunto;

    printf("Digite quandos numeros voce deseja calcular a media: ");
    scanf("%d", &numerosescolhidos);

    for(int i = 1; i <= numerosescolhidos; i++){
        printf("Digite um dos numeros: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }

    double divisao = soma / numerosescolhidos;

    printf("A média dos numero fornecidos é: %.1f", divisao);
}