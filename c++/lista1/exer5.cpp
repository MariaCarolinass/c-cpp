// explique cada execução do código
# include <iostream>

using namespace std;

class Banco {
    public:
        int valor;
        Banco( int quantidade ) {
            valor = quantidade;
            cout << "Valor " << valor << endl;
        }
        ~Banco() {
            cout << "Voce matou: " << valor << endl;
        }
};

class Cliente {
    public:
        Banco dado;
        Cliente(int A) : dado(A) {
            cout << "Novo Objeto\n";
        }
        Cliente( const Cliente& X ) : dado(X.dado.valor + 10) {
            cout << "Caiu aqui\n";
        }
};

void Desafio(Cliente porque) {
    Cliente Jaco(porque);
    cout << "Depois de Jaco\n";
}

int main() {
    Cliente Resposta(1);
    cout << "Chama Desafio\n";
    Desafio(Resposta);
    cout << "terminou..." << endl;
}

/*
Valor 1 -> inicia no construtor cliente que chama o de banco
Novo Objeto -> executa a saída do construtor cliente
Chama Desafio -> retorna a primeira saída do main após cliente
Valor 11 -> entra na função desafio que chama o segundo construtor de cliente
Caiu aqui -> executa a saída do construtor cliente
Valor 21 -> cliente chama o construtor banco e imprime sua saída
Caiu aqui -> executa a saída do construtor cliente
Depois de Jaco -> executa a saída da função desafio
Voce matou: 21 -> chama cliente que imprime a saída do destruidor de banco
Voce matou: 11 -> chama cliente que imprime a saída do destruidor de banco
terminou... -> imprime última saída do main
Voce matou: 1 -> chama cliente que imprime a saída do destruidor de banco
*/