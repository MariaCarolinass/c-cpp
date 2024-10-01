# include <stdio.h>

/*Descubra a soma de todos os múltiplos de 3 e 5 abaixo de 1000.*/

void main() {
    int i, somaMultiplos = 0;

    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            somaMultiplos += i;
        }
    }

    printf("A soma dos múltiplos de 3 ou 5 abaixo de 1000 é: %d\n", somaMultiplos);
}
