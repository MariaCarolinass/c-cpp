// explique a saída do código abaixo
# include <iostream>

int x = 5; // variável global iniciada com 5

int &f() {
    return x; // retorna a referência de x
}

main() {
    f() = 10; // altera o valor da função
    std::cout << x; // saída 10
}