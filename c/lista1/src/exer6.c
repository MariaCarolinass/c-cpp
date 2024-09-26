# include <stdio.h>
# include <string.h>
# include <ctype.h>

/*Ler um nome do teclado e ver se é igual ao seu nome. 
Imprimir conforme o caso: "NOME CORRETO" ou "NOME INCORRETO".*/

int main(void) {
    char nome[50];
    int i;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    for (i = 0; i < strlen(nome); i++) {
        nome[i] = tolower(nome[i]);
    }

    if (strcmp(nome, "maria") == 0) {
        printf("NOME CORRETO\n");
    } else {
        printf("NOME INCORRETO\n");
    }
}