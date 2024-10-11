# include <stdio.h>
# include <stdlib.h>

void soma_vetores(int *vet1, int *vet2, int *resultado, int n) {
    int i;
    for (i = 0; i < n; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int n, i;
    
    printf("Qual o tamanho dos dois vetores: ");
    scanf("%d", &n);

    int *vet1 = (int *) malloc(n * sizeof(int));
    int *vet2 = (int *) malloc(n * sizeof(int));
    int *resultado = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Digite os elementos do primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < n; i++) {
        printf("Digite os elementos do segundo vetor: ");
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, resultado, n);

    printf("Vetor resultado da soma: \n");
    
    for (i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }

    printf("\n");

    free(vet1);
    free(vet2);
    free(resultado);
}