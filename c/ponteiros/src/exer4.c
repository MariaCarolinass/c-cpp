# include <stdio.h>

int main(void) {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("a) %d \n", valor); // o ponteiro foi iniciado com o valor 10 e depois alterado para 20

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("b) %.1f \n", temp); // o ponteiro foi iniciado com o valor 26.5 e depois alterado para 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("c) %c \n", aux); // a variável aux foi usada para armazenar o valor do ponteiro na primeira posição

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("d) %c \n", aux); // a variável aux foi usada para armazenar o valor do ponteiro na quarta posição

    /* (e) */
    p3 = nome; // p3 armazena o endereço de nome
    printf("e) %c \n", *p3); // é retornado o primeiro caractere da variável nome

    /* (f) */
    p3 = p3 + 4; // p3 armazena o endereço de nome na quarta posição
    printf("f) %c \n", *p3); // é retornado o valor que está na quarta posição de nome

    /* (g) */
    p3--; // decremento de uma posição do ponteiro
    printf("g) %c \n", *p3); // o valor do ponteiro retorna a terceira posição de nome, após o decremento

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("h) %d \n", idade); // retorna o primeiro elemento do vetor (por padrão)

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("i) %d \n", idade); // retorna o segundo elemento do vetor, após ter somado mais 1 ao ponteiro

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("j) %d \n", idade); // retorna o terceiro elemento do vetor, após ter somado mais 1 ao ponteiro

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("l) %d \n", idade); // retorna o primeiro elemento do vetor, após ter sido decrementado em menos 2 posições

    /* (m) */
    p5 = &vetor[2] - 1; // p5 é atribuído ao elemento que está segunda posição do vetor, começando do zero, menos 1
    printf("m) %d \n", *p5); // retorna o segundo elemento do vetor

    /* (n) */
    p5++;
    printf("n) %d \n", *p5); // retorna o terceiro elemento do vetor, após ter sido incrementado em mais 1
}