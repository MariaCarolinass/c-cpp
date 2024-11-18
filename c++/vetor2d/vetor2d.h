#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d
{
private:
    float x, y;
public:
    Vetor2d();
    Vetor2d(float mx, float my=0);
    Vetor2d(const Vetor2d& v);
    Vetor2d soma(Vetor2d v1);
    void print();
    ~Vetor2d();
    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);
};

#endif // VETOR2D_H
