# include <stdio.h>
# include <math.h>

/*Ler os três coeficientes de uma equação de segundo grau e determinar suas raízes.*/

int main(void) {
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("Raiz 1 = %.2f\n", x1);
        printf("Raiz 1 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = - b / (2 * a);
        printf("Raiz = %.2f\n", x1);
    } else {
        printf("Não existem raízes.\n");
    }
}