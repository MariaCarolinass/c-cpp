# include <stdio.h>
# include <stdlib.h>

int comparar(const void* a, const void* b) {
    if (*(const float*)a > *(const float*)b)
        return 1;
    else if (*(const float*)a < *(const float*)b)
        return -1;
    return 0;
}

int main() {
    int i;
    int n = 10;
    
    float *valores = (float *) malloc(n * sizeof(float));
    
    for (i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }
    
    qsort(valores, n, sizeof(float), comparar);

    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }

    printf("\n");

    free(valores);
}