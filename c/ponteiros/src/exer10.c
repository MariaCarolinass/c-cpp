# include <stdio.h>

int main() {
    int vet[] = {4, 9, 13};
    int i;
    
    // PROGRAMA 1
    for(i = 0; i < 3; i++) {
        printf("%d ", *(vet + i)); // retorna o valor do vetor na posição i para cada execução (4 9 13) 
    }

    printf("\n");

    // PROGRAMA 2
    for(i = 0; i < 3; i++) {
        printf("%X ", vet + i); // retorna o endereço do vetor na posição i para cada execução (B6C0A460 B6C0A464 B6C0A468) 
    }

    printf("\n");
}