# include <stdio.h>

/*Crie uma função para converter de Celsius 
para Farenheit e de Farenheit para Celsius*/

float celsiusParaFarenheit(float temperatura) {
    return (temperatura * 9 / 5) + 32;
}

float farenheitParaCelsius(float temperatura) {
    return (temperatura - 32) * 5 / 9;
}

int main(void) {
    int opcao;
    float temperatura, convertida;

    printf("Como deseja converter?\n");
    printf("1) De Celsius para Farenheit\n");
    printf("2) De Farenheit para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite uma temperatura: ");
    scanf("%f", &temperatura);

    if (opcao == 1) {
        convertida = celsiusParaFarenheit(temperatura);
        printf("%.2f °C = %.2f °F\n", temperatura, convertida);
    } else {
        convertida = farenheitParaCelsius(temperatura);
        printf("%.2f °F = %.2f °C\n", temperatura, convertida);
    }
}