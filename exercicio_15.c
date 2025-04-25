//algoritimo que fala pro usuario digitar 3 numeros e que no final divide os 3 para ter a média

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

    media = soma / 3.0; 

    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
