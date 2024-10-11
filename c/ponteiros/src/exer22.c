# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int compare(const void* a, const void* b) {
   return (*(int*) a - *(int*) b);
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

    qsort(valores, n, sizeof(int), compare);

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