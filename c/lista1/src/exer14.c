# include <stdio.h>

/*Imprimir a tabuada de qualquer número n.*/

int main(void) {
    int numero, i, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        resultado = i * numero;
        printf("%d X %d = %d\n", i, numero, resultado);
    }
}