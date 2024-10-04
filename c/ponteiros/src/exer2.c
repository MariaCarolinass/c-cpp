# include <stdio.h>

int main(void) {
    int i = 5, *p;
    p = &i; // endereço: 4094
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}