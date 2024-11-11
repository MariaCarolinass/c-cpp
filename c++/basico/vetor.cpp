# include <iostream>

class Vetor2D {
    private: float x, y;
    public:
        void setX(float x_) {
            x = x_;
        }
        float getX() {
            return x;
        }
        void setY(float y_) {
            y = y_;
        }
        float getY() {
            return y;
        }
};

int main(void) {
    Vetor2D v;
    v.setX(3);
    std::cout << v.getX() << std::endl;
    return 0;
}