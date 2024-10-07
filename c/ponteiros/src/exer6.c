# include <stdio.h>

void funcao(char **p) {
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
}

int main() {
    char *a[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    funcao(a);
    return 0;
}

/*Saída do programa: gh

Cada elemento da array a possuí uma posição que parte do zero, como o tamanho do inteiro é 4,
o que acontece é que o ponteiro p é deslocado em 4 posições (sendo incrementado), depois 
decrementamos uma posição de 4 (4 - 1), sendo retornado o elemento de posição 3.

*/