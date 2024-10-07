# include <stdio.h>

int main(void) {
    int i = 5, *p;
    p = &i; // p aloca o endereço de i (4094)
    // p sabe o endereço de i (guarda)
    // *p tem o endereço de i e retorna o seu valor
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}