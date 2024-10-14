# include <stdio.h>
# include <stdlib.h>

// forma de comparar 1
int comparador(const void* a, const void* b) {
   return (*(int*) a - *(int*) b); // ordena os valores comparando a diferença
}

// forma de comparar 2
int comparador2(const void* a, const void* b) {
    if (*(const float*)a > *(const float*)b)
        return 1; // valor a maior que b
    else if (*(const float*)a < *(const float*)b)
        return -1; // valor a menor que b
    return 0; // valores iguais
}

int main() {
    int i;
    int n = 10;
    
    float *valores = (float *) malloc(n * sizeof(float));
    
    for (i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }
    
    qsort(valores, n, sizeof(float), comparador);

    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }

    printf("\n");

    free(valores);
}