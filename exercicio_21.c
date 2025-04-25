//algoritimo que agora faz a divizao e oque sobrar fala se é par ou impar

#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Digite o primeiro numero inteiro (numerador): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (divisor): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: divisao por zero nao e permitida.\n");
    } else {
        resto = num1 % num2;

        printf("O resto da divisao entre %d e %d e: %d\n", num1, num2, resto);

        if (resto % 2 != 0) {
            printf("O resto e impar.\n");
        } else {
            printf("O resto e par.\n");
        }
    }

    return 0;
}
