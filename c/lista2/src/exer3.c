# include <stdio.h>

/*Descubra qual o maior palíndromo formado pelo produto 
de números de três dígitos.*/

void main() {
    int i, j, maiorPalindromo = 0;

    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            int produto = i * j;
            int numero = produto;
            int produtoInvertido = 0;
            
            while (numero != 0) {
                int resto = numero % 10;                 
                produtoInvertido = produtoInvertido * 10 + resto; 
                numero /= 10;
            }
            
            if (produto == produtoInvertido) {
                if (produto > maiorPalindromo) {
                    maiorPalindromo = produto;
                    printf("%d = %d X %d\n", produto, i, j);
                }
            }
        }
    }

    printf("%d É O MAIOR PALÍNDROMO\n", maiorPalindromo);
}