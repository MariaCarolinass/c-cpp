# include <stdio.h>

int main(void) {
    int i = 2, j = 5;
    int *p, *q;

    p = &i; // p armazena o endereço de i 

    // *q = &j; erro de convenção entre int e ponteiro (tipos incompatíveis)

    p = &*&i; // p aponta para o valor de i 
    
    // i = (*&)j; // expressão inválida, "&" precisa ser usado seguido da variável (sintaxe)
    
    i = *&j; // i armazena o valor apontado em j
    
    i = *&*&j; // i armazena o valor apontado em j
    
    // q = *p; // um ponteiro não pode ser atribuído a outro ponteiro
    
    i = (*p)++ + *q; // i armazena a soma de ponteiros
}