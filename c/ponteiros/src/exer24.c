# include <stdio.h>
# include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int linhas_A, int colunas_A, int colunas_B) {
    int i, j, k;

    for (i = 0; i < linhas_A; i++) {
        for (j = 0; j < colunas_B; j++) {
            C[i * colunas_B + j] = 0;
            for (k = 0; k < colunas_A; k++) {
                C[i * colunas_B + j] += A[i * colunas_A + k] * B[k * colunas_B + j];
            }
        }
    }
}

void imprimir_matriz(int *matriz, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i * colunas + j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j;

    int linhas_A = 2;
    int colunas_A = 3;

    int linhas_B = colunas_A;
    int colunas_B = 4;

    int *A = (int *) malloc(linhas_A * colunas_A * sizeof(int));
    int *B = (int *) malloc(colunas_A * colunas_B * sizeof(int));
    int *C = (int *) malloc(linhas_A * colunas_B * sizeof(int));

    int valoresA[2][3] = {
        {2, 4, 2},
        {8, 6, 1}
    };

    // carregar valores para A
    for (i = 0; i < linhas_A; i++) {
        for (j = 0; j < colunas_A; j++) {
            A[i * colunas_A + j] = valoresA[i][j];
        }
    }
    
    int valoresB[3][4] = {
        {4, 1, 0, 2},
        {6, 2, 1, 9},
        {10, 1, 4, 3}
    };
    
    // carregar valores para B
    for (i = 0; i < linhas_B; i++) {
        for (j = 0; j < colunas_B; j++) {
            B[i * colunas_B + j] = valoresB[i][j];
        }
    }

    multiplica_matrizes(A, B, C, linhas_A, colunas_A, colunas_B);

    printf("Matriz A (2x3):\n");
    imprimir_matriz(A, linhas_A, colunas_A);

    printf("\nMatriz B (3x4):\n");
    imprimir_matriz(B, linhas_B, colunas_B);

    printf("\nMatriz C (resultado 2x4):\n");
    imprimir_matriz(C, linhas_A, colunas_B);

    free(A);
    free(B);
    free(C);
}