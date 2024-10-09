# include <stdio.h>

int main() {
    // unsigned modificador de tipo para não armazenar negativos
    // criado uma matriz bidimensional
    unsigned int x[4][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}, 
        {10, 11, 12}
    };
    // x aponta para o primeiro elemento da matriz x[0]
    // x + 3 -> incrementa x em 3, fazendo apontar para a quarta linha
    // *(x + 3) -> faz apontar para o primeiro elemento da quarta linha
    // *(x + 2) + 3 -> faz apontar para um endereço da terceira linha na coluna x[3] (mesmo não existindo essa coluna)  
    printf("%u, %u, %u", x + 3, *(x + 3), *(x + 2) + 3); // impressão dos endereços na matriz
}