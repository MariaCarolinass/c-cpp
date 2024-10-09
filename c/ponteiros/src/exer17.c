# include <stdio.h>
# include <stdlib.h>

/*Memory leak é um problema de vazamento de memória que acontece quando um programa
aloca memória, mas não a libera adequadamente após o uso, resultando na perda dessa 
memória que não pode mais ser acessada ou reutilizada, pondendo levar ao esgotamento 
de memória disponível no sistema ao longo do tempo, afetando o desempenho do programa 
e do sistema como um todo.*/

int main() {
    int *p = (int *) malloc(10 * sizeof(int)); // alocando memória com a função malloc
    p = (int *) malloc(sizeof(int) * 20); // sobreescrevendo ponteiro sem liberar memória
    free(p); // correção, a função free é utilizada para liberar a memória
}