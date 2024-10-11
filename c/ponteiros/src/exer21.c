# include <stdio.h>
# include <stdlib.h>

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
    
    qsort(valores, n, sizeof(int), compare);
    
    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");

    free(valores);
}