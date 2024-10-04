# include <stdio.h>

int main(void) {
    int i = 2, j = 5;
    int *p, *q;

    p = &i; // p aponta para o valor de i 
    
    // *q = &j; erro de convenção entre int e ponteiro (tipos incompatíveis)

    p = &*&i; // p aponta para o valor de i 
    
    // i = (*&)j; // expressão inválida, pois & precisa ser usado seguido da variável (sintaxe)
    
    i = *&j; // i é igual ao valor apontado em j
    
    i = *&*&j; // i é igual ao valor apontado em j
    
    // q = *p; // um inteiro não pode ser um ponteiro, ele precisa ser atribuído a um valor
    
    i = (*p)++ + *q; // os ponteiros podem ser atribuídos e somados
}