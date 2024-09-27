# include <stdio.h>

/*Calcular a soma dos 100 primeiros nº naturais.*/

int main(void) {
    int numero = 100;
    
    int soma = (numero * (numero + 1)) / 2;
    printf("A soma dos 100 primeiros números naturais é: %d\n", soma);
}