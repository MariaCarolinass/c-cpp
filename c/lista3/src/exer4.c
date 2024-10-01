# include <stdio.h>
# include <string.h>

/*Prepare um programa que leia uma frase do teclado e 
informe quantas caracteres e palavras foram digitadas. */

int main(void) {
    char frase[1000];
    int i, caracteres = 0, palavras = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (!isspace(frase[i])) {
            caracteres++;
        }
        if ((i == 0 && !isspace(frase[i])) || (isspace(frase[i-1]) && !isspace(frase[i]))) {
            palavras++;
        }
    }

    printf("%d caracteres\n", caracteres);
    printf("%d palavras\n", palavras);
}