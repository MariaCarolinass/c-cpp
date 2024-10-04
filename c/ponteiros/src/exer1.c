# include <stdio.h>

int main(void) {
    int i = 3,j = 5;
    int *p, *q;
    
    p = &i;
    q = &j;

    printf("%d\n", p == &i); // verdadeiro, pois p foi atribuido em &i
    printf("%d\n", *p - *q); // -2, pois os ponteiros apontam para os valores de i e j
    printf("%d\n", **&p); // 3, pois o ponteiro resulta no valor de i
    printf("%d\n", 3 - *p/(*q) + 7); // 10, pois atribuimos os valores de i e j p/ os ponteiros 
}