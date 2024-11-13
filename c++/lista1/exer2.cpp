// implemente uma classe para operações de uma conta corrente
# include <iostream>

class ContaCorrente {
    private: float saldo, rendimento;

    public:
        void setSaldo(float saldo_) {
            saldo = saldo_;
        }
        
        float getSaldo() {
            return saldo;
        }

        void setRendimento(float rendimento_) {
            rendimento = rendimento_;
        }
        
        float getRendimento() {
            return rendimento;
        }

        void depositar(float valor) {
            float novoSaldo = saldo + valor;
            setRendimento(novoSaldo * 5 / 100);
            setSaldo(novoSaldo + getRendimento());
        }
        
        float verRendimento() {
            return getRendimento();
        }
        
        void sacar(float valor) {
            if (getSaldo() > 0) {
                setSaldo(saldo - valor);
            }
        }
        
        float verSaldo() {
            return getSaldo();
        }      
};

int main(void) {
    ContaCorrente conta;
    conta.depositar(300);
    std::cout << "Rendimento: R$ " << conta.verRendimento() << std::endl;
    conta.sacar(200);
    std::cout << "Saldo: R$ " << conta.verSaldo() << std::endl;
}