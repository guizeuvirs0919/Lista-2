#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma >= 10) {
        printf("A soma � %d. Resultado: Maior ou igual a 10.\n", soma);
    } else {
        printf("A soma � %d. Resultado: Menor que 10.\n", soma);
    }

    return 0;
}
