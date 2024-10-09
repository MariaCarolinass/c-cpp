# include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    
    **ppc += 1; // 5 + 1 = 6
    c = **ppc; // c recebe o valor de ppc
    
    // ppc aponta para pb 
    // ppc foi incrementado em mais 1
    // fazendo com que pb também seja incrementado
    *pb += 2; // 6 + 2 = 8
    b = *pb; // b recebe o valor de pb
    
    a += 3; // 5 + 3 = 8
    return a + b + c; // 8 + 8 + 6 = 22
}

void main() {
    int c, *b, **a;
    c = 5;
    b = &c; // b aponta para c
    a = &b; // a aponta para b, que b aponta para c
    printf("%d\n", f(c, b, a));
    getchar();
}