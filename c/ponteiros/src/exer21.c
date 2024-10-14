# include <stdio.h>
# include <stdlib.h>

int comparador(const void* a, const void* b) {
   return (*(int*) a - *(int*) b);
}

void ordenarValores(int *valores, int n, int (*comparar)(const void *, const void *)) {
    int i, j, aux;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            // compara através da função comparador
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
    
    ordenarValores(valores, n, comparador);
    
    printf("Valores ordenados: ");

    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");

    free(valores);
}