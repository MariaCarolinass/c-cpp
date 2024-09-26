# include <stdio.h>

/*Ler 2 números inteiros do teclado. Se o segundo for diferente de zero, 
calcular e imprimir o quociente do primeiro pelo segundo. Caso contrário, 
imprimir a mensagem: "DIVISÃO POR ZERO"*/

int main(void) {
    int num1, num2, divisao;

    printf("Digite dois números:\n");
    scanf("%d%d", &num1, &num2);

    if (num2 != 0) {
        divisao = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, divisao);
    } else {
        printf("DIVISÃO POR ZERO\n");
    }
}