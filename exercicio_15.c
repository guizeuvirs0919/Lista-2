#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    media = soma / 3.0;  // Usamos 3.0 para garantir que a média seja calculada como um número decimal

    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
