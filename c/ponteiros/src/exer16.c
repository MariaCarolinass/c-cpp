# include <stdio.h>

int main() {
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value; // válido
    scanf("%f", &aloha); // inválido (precisa indicar a posição que deseja imprimir &aloha[2])

    // aloha = "value"; // inválido (não é possível atribuir diretamente um valor para uma array, sem específicar a posição)
    // printf("%f", aloha);

    coisas[4][4] = aloha[3]; // válido
    //coisas[5] = aloha; // inválido (não é possível atribuir uma posição da matriz a uma array)

    //pf = value; // inválido (um ponteiro não pode ser atribuído a um valor float, deve ser pf = &value, para apontar para o endereço do valor)
    pf = aloha; // válido (aloha é um endereço para &aloha[0])
}