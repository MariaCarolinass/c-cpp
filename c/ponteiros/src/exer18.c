# include <stdio.h>

/*Um ponteiro para uma função é um endereço criado para apontar para 
uma ou mais funções que tenham o mesmo tipo e número de argumentos, 
de forma dinâmica, permitindo chamar as funções de forma indireta.*/

int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

/*Criada uma função auxliar que recebe dois inteiros e um ponteiro do 
tipo int com dois argumentos inteiros. A função faz a ponte entre as 
funções de soma e subtrai, chamando elas de forma indireta. */
void executaOperacao(int (*operacao)(int, int), int x, int y) {
    printf("%d\n", operacao(x, y));
}

int main() {
    // int (*operacao)(int, int)
    // operacao = soma;
    // operacao(10, 5);
    executaOperacao(soma, 10, 5); // Saída: 15 (10 + 5)
    executaOperacao(subtrai, 10, 5); // Saída: 5 (10 - 5)
}