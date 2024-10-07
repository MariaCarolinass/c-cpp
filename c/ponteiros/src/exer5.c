# include <string.h>
# include <stdio.h>
# include <stdlib.h>

// correção da função: (*str)++; // modifica o ponteiro original
void funcao(char** str) {
    str++;
}

int main() {
    char *str = (void *) malloc(50 * sizeof(char)); // é alocado uma memória dinâmica para str (50 bytes)
    strcpy(str, "Agostinho"); // copia para str a palavra "Agostinho"
    funcao(&str); // tentativa de alterar o valor de str somando mais 1 (não funciona)
    puts(str); // imprimi o que tem em str
    free(str); // liberando memória para evitar vazamento de memória
    // correção ao atualizar função: free(str - 1); // libera o ponteiro origial que foi incrementado
    return 0;
}

/* O ponteiro não foi manipulado de forma correta ao tentar imprimir "gostinho", ao passar &str 
para a função que incrementa str++, o conteúdo da variável não é alterado, pois str é uma cópia 
local que aponta para o endereço de *str, dessa forma a variável original não é afetada.*/