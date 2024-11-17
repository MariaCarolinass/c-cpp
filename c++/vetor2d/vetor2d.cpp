#include "vetor2d.h"
#include <iostream>

using namespace std;

Vetor2d::Vetor2d()
{
    x = y = 0;
    cout << "Construtor padrão" << endl;
}

Vetor2d::Vetor2d(float mx, float my)
{
    x = mx; y = my;
    cout << "Construtor com argumentos" << endl;
}

Vetor2d::Vetor2d(const Vetor2d &v)
{
    x = v.x; y = v.y;
    cout << "Construtor de cópia" << endl;
}

Vetor2d Vetor2d::soma(Vetor2d v1)
{
    Vetor2d ret;
    ret.x = x + v1.x;
    ret.y = y + v1.y;
    return ret;
}

void Vetor2d::print()
{
    cout << "(" << x << ", " << y << ")" << endl;
}

Vetor2d::~Vetor2d()
{
    cout << "Destrutor" << endl;
}

void Vetor2d::setX(float mx) {
    x = mx;
}

void Vetor2d::setY(float my) {
    y = my;
}

float Vetor2d::getX(void) {
    return x;
}

float Vetor2d::getY(void) {
    return y;
}
