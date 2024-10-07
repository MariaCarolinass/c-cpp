# include <stdio.h>

int main(void) {
    int vet[20] = {8, 67, 33, 3, 27, 4, 5, 22, 61, 1, 83, 18, 43, 21, 543, 76, 2, 87, 15, 78};
    int *pulo; // ponteiro pulo

    pulo = vet; // associação de pulo em vet 

    // incrementa o ponteiro em 2 elementos 
    // retorna o terceiro elemento (33) que está na posição 2 no vetor (começando em zero)
    printf("Posição: %d - vet[2] = %d\n", 2, *(pulo + 2));

    // incrementa o ponteiro em 4 elementos
    // retorna o quinto elemento (27) da posição 4 do vetor
    printf("Posição: %d - vet[4] = %d\n", 4, *(pulo + 4));
    
    // retorna o endereço da posição 4 do vetor
    printf("Endereço (vet[4]): %d\n", pulo + 4);
    
    // retorna o endereço da posição 2 do vetor
    printf("Endereço (vet[2]): %d\n", pulo + 2);
}