# include <stdio.h>
# include <stdlib.h>

// A função struct é utilizada para armazenar variáveis de diferentes tipos associadas a um nome
// Os seus atributos não podem ser inicializado dentro da sua estrutura
struct teste {
    // int x = 3; // ERRO
    // char nome[] = "jose"; // ERRO
    int x;
    char nome[20]; // definido tamanho de nome para alocar um valor
};

int main() {
    struct teste *s;

    // Alocar memória para o ponteiro s
    s = (struct teste *) malloc(sizeof(struct teste));

    // inicializando x
    s -> x = 3;

    // cópia a string para o nome
    snprintf(s -> nome, sizeof(s -> nome), "jose");

    // acessando membros da struct com os valores atribuídos
    printf("%d\n", s -> x);
    printf("%s\n", s -> nome);

    // liberar memória alocada
    free(s);
}