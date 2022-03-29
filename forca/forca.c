#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "forca.h"
#define TAMANHO_PALAVRA 20

                                                            //ABERTURA DE VARIÁVEIS GLOBAIS
char palavrasecreta[TAMANHO_PALAVRA];  
char chutes[26];
int chutesdados = 0;

void abertura(){                                            //FUNÇÕES GLOBAIS
    printf("/*****************/\n");
    printf("/* Jogo de Forca */\n");
    printf("/*****************/\n\n");
    printf("/->Dev by Rafefs<-/\n\n");

}

void escolhepalavra(){
    //SEPARA AS LETRAS 
    FILE* f; 

    f = fopen("palavras.txt", "r+");      
    if(f == 0){
        printf("Banco de dados não disponível\n\n");
        exit(1);
    }               //ONDE AS PALAVRAS ESTÃO
    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);
    srand(time(0));                                     //NUMERO RANDOMICO PARA PUXAR
    int randomico = rand() % qtddepalavras;             //PEGA A QUANTIDADE DE PALAVRA -1, SE NÃO O RAND DEVOLVE NÚMERO GRANDE
    for(int i = 0; i <= randomico; i++){                //LOOP 0 - NUMERO RANDOMICO QUE ESCOLHI
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}

void chuta(){
    char chute;
        printf("Qual letra? ");    
        scanf(" %c", &chute);   

        chutes[chutesdados] = chute;
        chutesdados++;  
}

int jachutou(char letra){
    int achou = 0;
    for(int j = 0; j < chutesdados; j++){
        if(chutes[j] == letra){
            achou = 1;
            break;
        }
    }
    return achou;
}

int ganhou(){
    for(int i = 0; i < strlen(palavrasecreta); i++){
        if(!jachutou(palavrasecreta[i])){
            return 0;
        }
    }
            return 1;
}

void desenhaforca(){

    int erros =  chuteserrados();
   
    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    printf("Voce ja deu %d chutes\n", chutesdados);
    
                                                         
    for(int i = 0; i < strlen(palavrasecreta); i++){        //STRLEN -> ELE VARRE PARA VER  A PALAVRA SECRETA / PROCURA QUANTAS LETRAS TEM NA PALAVRA SECRETA
                                                             
        if(jachutou(palavrasecreta[i])){
            printf("%c", palavrasecreta[i]);                //SE ELE CHUTOU UMA LETRA QUE TENHA NA PALAVRA SECRETA ELE VAI COLOCAR QUE VOCÊ ACERTOU
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int letraexiste(char letra){

    for(int j = 0; j < strlen(palavrasecreta); j++){
        if(letra == palavrasecreta[j]){
            return 1;
        }
   }
            return 0;
}

int chuteserrados(){
    int erros = 0;

    for(int i = 0; i < chutesdados; i++){
        if (!letraexiste(chutes[i])){
            erros++;
        }
    }
            return erros;
}

int enforcou(){

    return chuteserrados() >= 5;
}

void adicionapalavra(){
        char quer;

        printf("Você deseja adicionar uma nova palavra no Jogo (S/N) ?");
        scanf(" %c", &quer);
    
        if(quer == 'S') {
            char novapalavra[TAMANHO_PALAVRA];

            printf("Digite a nova palavra, em letras maiusculas: ");
            scanf("%s", &novapalavra);
            
            FILE* f;

            f = fopen("palavras.txt", "r+");
        
        if(f == 0){
            printf("Banco de dados de palavras não disponivel\n\n");
            exit(1);
        }
            int qtd;
            fscanf(f, "%d", &qtd);
            qtd++;
            fseek(f, 0, SEEK_SET);
            fprintf(f, "%d", qtd);
            fseek(f, 0, SEEK_END);
            fprintf(f, "\n%s", novapalavra);

            fclose(f);
        
        }
}


int main(){

    abertura();
    escolhepalavra(); 

    do {
        
        desenhaforca();
        chuta();
    
    } while (!ganhou() && !enforcou());                     //AQUI INVOCAMOS A FUNÇÃO ENFORCOU
        
        if(ganhou()) {
        printf("\nParabens, voce ganhou!\n\n");

        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");

    } else {
        printf("\nPuxa, você foi enforcado!\n");
        printf("A palavra era **%s**\n\n", palavrasecreta);

        printf("    _______________         \n");
        printf("   /               \\       \n"); 
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           | |        \n");
        printf("   | I I I I I I I |        \n");
        printf("   |  I I I I I I  |        \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    }
        adicionapalavra();
        

}

                                                            //BIBLIOTECA QUE PUXA O STRLEN - <string.h>;
                                                            //NÃO PODE USAR UM RETURN DENTRO DA VOID;