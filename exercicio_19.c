#include <stdio.h>

int main() {
    float num1, num2;
    int resultado;

    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    float multiplicacao = num1 * num2;

    if (multiplicacao == (int)multiplicacao) {
        resultado = (int)multiplicacao;
        printf("A multiplicaçao dos numeros e: %d\n", resultado);
    } else {
        printf("A multiplicaçao nao resulta em um número inteiro.\n");
    }

    return 0;
}
