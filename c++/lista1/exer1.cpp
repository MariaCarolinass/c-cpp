// Corrija o código
# include <iostream>

class Math {
    public:
        static double media_aritmetica(int a, int b) {
            return (a + b) / 2.0;
        }
};

int main() {
    // cout << Math::media_aritmetica(2, 1); definir cout
    std::cout << Math::media_aritmetica(2, 1) << std::endl;
}
