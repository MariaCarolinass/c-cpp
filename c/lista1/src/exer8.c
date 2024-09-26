# include <stdio.h>

/*Ler três valores e determinar o maior dentre 
eles e colocá-los em ordem crescente*/

int main(void) {
    int valor1, valor2, valor3, valores[2], i, size_array;

    printf("Digite três valores:\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);

    if (valor1 > valor2 && valor1 > valor3) {
        valores[2] = valor1;
        if (valor2 > valor3) {
            valores[1] = valor2;
            valores[0] = valor3;
        } else {
            valores[1] = valor3;
            valores[0] = valor2;
        }
    } else if (valor2 > valor1 && valor2 > valor3) {
        valores[2] = valor2;
        if (valor1 > valor3) {
            valores[1] = valor1;
            valores[0] = valor3;
        } else {
            valores[1] = valor3;
            valores[0] = valor1;
        }
    } else {
        valores[2] = valor3;
        if (valor1 > valor2) {
            valores[1] = valor1;
            valores[0] = valor2;
        } else {
            valores[1] = valor1;
            valores[0] = valor1;
        }
    }

    printf("O maior valor é: %d\n", valores[2]);

    size_array = sizeof(valores) / sizeof(valores[0]);
    
    for (i = 0; i < size_array + 1; i++) {
        printf("Valor %d: %d\n", i + 1, valores[i]);
    }
}