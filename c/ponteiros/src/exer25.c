# include <stdio.h>
# include <stdlib.h>

// Qual dos trechos de código abaixo possuem alguma falha de vazamento de memória?

// (A) 
void f1( ) {
    void *s;
    s = malloc(50);
    free(s); // memória liberada corretamente
}

// (B)
int f( ) {
    float *a;
    return 0; // não é usado alocamento de memória
}

//(C)
int f(char *data) {
    void *s;
    s = malloc(50);
    int size = strlen(data);
    if (size > 50)
        return(-1); // falha de vazamento de memória
    free(s);
    return 0;
}

//(D)
int *f(int n) {
    int *num = malloc(sizeof(int)*n);
    return num;
}
int main(void) {
    int *num;
    num = f(10);
    free(num); // memória liberada corretamente
    return 0;
}

//(E)
void f(int n) {
    char *m = malloc(10);
    char *n = malloc(10);
    free(m);
    m = n;
    free(m);
    free(n);
}

/*Na letra C há um problema de vazamento de memória, pois existe uma condição antes da liberação 
de memória que se for satisfeita o programa é encerrado sem a liberação da memória que havia 
sido alocada antes. O correto é liberar a memória fora e dentro da condição, já que dentro 
dela existe um return que finaliza o programa.*/