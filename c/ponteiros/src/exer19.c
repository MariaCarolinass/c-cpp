# include <stdio.h>
# include <stdlib.h>

/*A ordenação por Bubble sort é baseado na comparação dos elementos da lista e na 
troca de posição dos mesmos quando necessário para atingir a ordenação pretendida.*/

void ordenarValores(float *valores, int n) {
    int i, j, aux;
    
    // Loops para comparar os elementos da esquerda para a direita
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            // se o elemento à esquerda for maior que o próximo elemento, 
            // faça a troca de posições
            if (valores[j] > valores[j + 1]) {
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