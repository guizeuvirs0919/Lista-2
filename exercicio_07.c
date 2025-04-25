#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int soma1, soma2;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma1 = num1 + num2;

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    soma2 = num3 + num4;

    if (soma2 == 0) {
        printf("Erro: divisão por zero nao e permitida.\n");
    } else {
        resultado = (float)soma1 / soma2;
        printf("Resultado da divisao da primeira soma pela segunda: %.2f\n", resultado);
    }

    return 0;
}
