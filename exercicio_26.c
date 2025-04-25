//algoritimo que pega 2 numeros digitado, soma eles e fala se é ou nao maior que 10

#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma >= 10) {
        printf("A soma é %d. Resultado: Maior ou igual a 10.\n", soma);
    } else {
        printf("A soma é %d. Resultado: Menor que 10.\n", soma);
    }

    return 0;
}
