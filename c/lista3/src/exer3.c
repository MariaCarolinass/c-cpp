# include <stdio.h>
# include <stdlib.h>

/*Crie uma função para gerar um número aleatório no intervalo 
fechado [A:B], sendo A e B passados como parâmetro para essa função. */

int aleatorio(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(void) {
    int x, a, b;

    printf("Digite o valor de A e B:\n");
    scanf("%d%d", &a, &b);

    x = aleatorio(a, b);

    printf("O número sorteado é: %d\n", x);
}