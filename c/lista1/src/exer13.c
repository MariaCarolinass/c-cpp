# include <stdio.h>

/*Para calcular o fatorial de um número qualquer.*/

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int fatorial = 1;

    while (numero > 0) {
        fatorial = fatorial * numero;
        numero--;
    }
    
    printf("O seu número fatorial é %d\n", fatorial);
}