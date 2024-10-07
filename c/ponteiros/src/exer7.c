# include <stdio.h>

int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; // array de números com ponto flutuante
    float *f; // ponteiro criado
    int i;
    f = vet; // atribuindo vet ao ponteiro f
    
    printf("contador/valor/valor/endereco/endereco\n");
    
    for (i = 0; i <= 4; i++) {
        printf("i = %d", i); // índice correspondente na array
        printf(" vet[%d] = %.1f", i, vet[i]); // elemento do vetor em uma posição i
        printf(" *(f + %d) = %.1f", i, *(f + i)); // incrementando o ponteiro para o endereço i
        printf(" &vet[%d] = %X", i, &vet[i]); // elemento do vetor, após o incremento 
        printf(" (f + %d) = %X", i, f + i); // resultado da modificação
        printf("\n");
    }
}