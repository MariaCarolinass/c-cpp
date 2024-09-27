# include <stdio.h>

/*Ler 4 números inteiros e calcular a soma dos que forem par.*/

int main(void) {
    int num1, num2, num3, num4, soma;

    printf("Digite quatro números:\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    soma = verificarPares(num1) + verificarPares(num2) + verificarPares(num3) + verificarPares(num4);

    printf("A soma dos números pares é: %d\n", soma);
}

int verificarPares(int numero) {
    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
        return numero;
    } else {
        return 0;
    }
}