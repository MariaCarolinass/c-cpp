# include <stdio.h>

// Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles.

int main(void) {
    int x, y, quociente, resto;

    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("Quociente = %d\n", quociente);
    printf("Resto = %d\n", resto);
}