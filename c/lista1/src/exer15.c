# include <stdio.h>

/*Gere a sequência da série de Fibonacci.*/

int main(void) {
    int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int ultimo = 0;
    int penultimo = 1;
    
    printf("%d %d", ultimo, penultimo);

    for (i = 1; i <= numero; i++) {
        int proxNumero = ultimo + penultimo;
        printf(" %d", proxNumero);
        ultimo = penultimo;
        penultimo = proxNumero;
    }

    printf("\n");
}