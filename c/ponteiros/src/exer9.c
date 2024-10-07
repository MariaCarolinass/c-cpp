# include <stdio.h>

int main(void) {
    int mat[4] = {2, 3, 1, 8};
    int *p, x;

    p = mat + 1; // expresão válida, retorna o segundo elemento de mat, pois incrementa 0 + 1
    printf("%d\n", *p);

    // p = mat++; // expresão inválida, uma array não pode ser incrementada, por ser um valor constante
    
    // p = ++mat; // expresão inválida, o endereço da array não pode ser modificado
    
    x = (*mat); // recebe por padrão o primeiro elemento de mat na posição 0
    printf("%d\n", x);
}