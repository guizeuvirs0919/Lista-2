#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    float media;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    media = soma / 3.0;  // Usamos 3.0 para garantir que a m�dia seja calculada como um n�mero decimal

    printf("A soma dos n�meros �: %d\n", soma);
    printf("A m�dia dos n�meros �: %.2f\n", media);

    return 0;
}
