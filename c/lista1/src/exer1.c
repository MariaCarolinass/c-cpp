# include <stdio.h>

// Leia um número e exiba seu sucessor.

int main(void) {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O sucessor do número é %d\n", numero + 1);
}