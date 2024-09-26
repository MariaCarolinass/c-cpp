# include <stdio.h>

/*Para ler 3 números reais do teclado e verificar se o 
primeiro é maior que a soma dos outros dois.*/

int main(void) {
    double valor1, valor2, valor3;

    printf("Digite três números:\n");
    scanf("%lf%lf%lf", &valor1, &valor2, &valor3);

    if (valor1 > valor2 + valor3) {
        printf("Sim, o valor 1 é maior que a soma do valor 2 e 3");
    } else {
        printf("Não, o valor 1 não é maior que a soma do valor 2 e 3");
    }
}