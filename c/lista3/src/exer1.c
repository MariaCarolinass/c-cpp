# include <stdio.h>
# include <string.h>

/*Escrever ao contrário um texto que o usuário forneca.*/

int main(void) {
    int i;
    char texto[100];

    printf("Escreva um texto: ");
    fgets(texto, sizeof(texto), stdin);
    
    for (i = strlen(texto) - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    printf("\n");
}