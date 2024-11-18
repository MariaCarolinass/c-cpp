#include "vetor2d.h"

int main()
{
    Vetor2d v1(3, 4), v2(5, 6), v3;
    v1.print();
    v2.print();

    v3 = v1.soma(v2);
    v3.print();

    return 0;
}
