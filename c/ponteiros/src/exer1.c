# include <stdio.h>

int main(void) {
    int i = 3,j = 5;
    int *p, *q;
    
    p = &i;
    q = &j;

    printf("%d\n", p == &i); // verdadeiro, p reconhece quem é i (ele aponta para i)
    printf("%d\n", *p - *q); // -2, é atribuido os valores de i e j a partir do endereço do ponteiro
    printf("%d\n", **&p); // 3, o ponteiro recebe endereço de i (na qual foi atribuído) e retorna o seu valor 
    printf("%d\n", 3 - *p/(*q) + 7); // 10, os valores de i e j são recuperados com os endereços dos ponteiros 
}