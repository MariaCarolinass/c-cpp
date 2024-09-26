# include <stdio.h>

/*Ler dois valores reais do teclado, calcular e imprimir na tela:
a. A soma destes valores
b. O produto deles
c. O quociente entre eles*/

int main(void) {
    double valor1, valor2, soma, produto, quociente;

    printf("Digite dois números:\n");
    scanf("%lf%lf", &valor1, &valor2);

    soma = valor1 + valor2;
    produto = valor1 * valor2;
    quociente = valor1 / valor2;

    printf("Soma = %.2f\n", soma);
    printf("Produto = %.2f\n", produto);
    printf("Quociente = %.2f\n", quociente);
}