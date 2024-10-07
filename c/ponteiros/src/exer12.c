# include <stdio.h>

void main() {
    int const *x = 3; 
    // printf("%d", ++(*x)); // Erro de compilação
    /*x foi definido como um ponteiro constante (const) e não pode ser alterado
    na impressão do resultado temos uma tentativa de incrementar x, mas como x foi 
    marcado como const, x não pode ser mais alterado de nenhuma forma*/
}