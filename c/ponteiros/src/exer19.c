# include <stdio.h>
# include <stdlib.h>

void ordenarValores(float *valores, int n) {
    int i, j;
    float posicao;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                posicao = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = posicao;
            }
        }
    }
}

int main() {
    int i;
    int n = 10;
    
    float *valores = (float *) malloc(n * sizeof(float));
    
    for (i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }
    
    ordenarValores(valores, n);

    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }

    printf("\n");

    free(valores);
}