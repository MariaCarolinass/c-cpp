# include <stdio.h>

/* Calcular a média final dadas as notas das 3 provas e produzir
uma saída com a média e a situação do aluno de acordo com o seguinte critério: 
média >= 7, aprovado; 5 < média < 7, recuperação; média < 5, reprovado.*/

int main(void) {
    float nota1, nota2, nota3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média final é: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media > 5 && media < 7) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
}