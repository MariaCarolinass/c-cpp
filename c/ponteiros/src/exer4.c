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
    printf("a) %d \n", valor); // o valor mudou p/ 20, pois foi atribuído a um ponteiro que substítuiu o seu valor

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("b) %.1f \n", temp); // mesma situação da letra a

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("c) %c \n", aux); // o valor do ponteiro foi atribuído a variável aux

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("d) %c \n", aux); // o valor do ponteiro foi atribuído a variável aux

    /* (e) */
    p3 = nome;
    printf("e) %c \n", *p3); // o ponteiro armazena o primeiro caracter do valor de nome

    /* (f) */
    p3 = p3 + 4;
    printf("f) %c \n", *p3); // o ponteiro retorna o valor armazenado na quarta posição

    /* (g) */
    p3--;
    printf("g) %c \n", *p3); // uma posição foi decrementada do ponteiro armazenado anteriomente

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("h) %d \n", idade); // aponta o primeiro elemento do vetor

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("i) %d \n", idade); // retorna o segundo elemento do vetor

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("j) %d \n", idade); // retorna o terceiro elemento do vetor

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("l) %d \n", idade); // valor foi retornado para a primeira posição do vetor

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("m) %d \n", *p5); // valor foi retornado para a segunda posição do vetor

    /* (n) */
    p5++;
    printf("n) %d \n", *p5); // valor foi retornado para a terceira posição do vetor
}