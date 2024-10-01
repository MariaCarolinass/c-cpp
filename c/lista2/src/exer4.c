# include <stdio.h>

/*Descubra a diferença entre o quadrado da soma e a 
soma dos quadrados dos cem primeiros números naturais.*/

void main() {
    int i, somaQuadrado = 0, soma = 0, quadradoSoma, difenca;

    for (i = 1; i <= 100; i++) {
        somaQuadrado += i * i;
    }

    for (i = 1; i <= 100; i++) {
        soma += i;
    }
    
    quadradoSoma = soma * soma;

    difenca = quadradoSoma - somaQuadrado;

    printf("%d\n", difenca);
}