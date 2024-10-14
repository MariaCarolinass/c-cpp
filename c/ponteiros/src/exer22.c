# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int comparador(const void* a, const void* b) {
   return (*(int*) a - *(int*) b);
}

void ordenarValores(int *valores, int n, int (*comparar)(const void *, const void *)) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (comparador(&valores[j], &valores[j + 1]) > 0) {
                aux = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = aux;
            }
        }
    }
}

int main() {
    int i;
    int n = 10;
    
    int *valores = (int *) malloc(n * sizeof(int));
    
    for (i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }
    
    // Variáveis para medir o tempo
    clock_t start, end;
    double cpu_time_used;
    
    // Marca o tempo antes de iniciar a ordenação
    start = clock();

    qsort(valores, n, sizeof(int), comparador);
    // ordenarValores(valores, n, comparador);

    // Marca o tempo após a ordenação
    end = clock();

    // Calcula o tempo de execução em segundos
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");
    printf("Tempo de execução do qsort: %f segundos\n", cpu_time_used);

    free(valores);
}