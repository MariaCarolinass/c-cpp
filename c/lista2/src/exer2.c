# include <stdio.h>

/*O menor número inteiro que pode ser dividido pelos 
números de 1 a 20 sem deixar resto.*/

void main() {
    int i, divisor = 20;

    while (1) {
        int divisivel = 1;

        for (i = 1; i <= 20; i++) {
            if (divisor % i != 0) {
                divisivel = 0;
                break;
            }
        }

        if (divisivel) {
            break;
        }

        divisor++;
    }
    
    printf("%d \n", divisor);
}