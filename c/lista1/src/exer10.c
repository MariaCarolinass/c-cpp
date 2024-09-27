# include <stdio.h>

/*Ler três valores do teclado e dizer se eles formam um triângulo. 
Caso afirmativo, dizer seu tipo (equilátero, isósceles ou escaleno).*/

int main(void) {
    float valor1, valor2, valor3;

    printf("Digite três valores referentes aos lados de um triângulo: \n");
    scanf("%f%f%f", &valor1, &valor2, &valor3);

    if (valor1 + valor2 > valor3 && valor2 + valor3 > valor1 && valor1 + valor3 > valor2) {
        printf("Os valores formam um triângulo\n");
        
        if (valor1 == valor2 == valor3) {
            printf("O triângulo é equilátero\n");
        } else if (valor1 == valor2 || valor1 == valor3 || valor2 == valor3) {
            printf("O triângulo é isósceles\n");
        } else {
            printf("O triângulo é escaleno\n");
        }
    } else {
        printf("Não foi possível formar um triângulo\n");
    }
}