// Escreva um programa capaz de realizar a combinação de cores e testar se são subcores das outras
# include <iostream>

class Color {
    private: float r, g, b; // cores no intervalo 0-255
    
    public: 
        // construtor da classe
        // guarda o estado inicial do objeto
        Color(float _r = 0, float _g = 0, float _b = 0) {
            r = _r;
            g = _g;
            b = _b;
        }

        // retorna um novo individuo de cor igual a media
        // da sua cor com a cor passada como parametro
        Color operator+(Color c) {

        }

        // se for fornecido um dos pais do individuo
        // a funcao separa a cor do outro parental
        Color operator-(Color c) {

        }

        // retorna ``1'' se o individuo c possui cor igual
        // ao proprio objeto, e ``0'', caso contrario
        int operator==(Color c) {

        }

        void print() {
            
        }
};

int main(void) {
    Color a(255, 0, 0), b(0, 120, 121), c, d;
    /*c = a + b;
    d = c - a;
    d.print();

    if (d == b) {
        std::cout << "Fail! DNA positivo: b eh pai de c!\n";
    } else {
        std::cout << "Ufa! que alivio!";
    }*/
}