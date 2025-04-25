//algoritimo que pede 2 numeros reais e depois multiplica eles e diz se deu um numero inteiro ou nao 

#include <stdio.h>

int main() {
    float num1, num2;
    int resultado;

    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);

    float multiplicacao = num1 * num2;

    if (multiplicacao == (int)multiplicacao) {
        resultado = (int)multiplicacao;
        printf("A multiplicaçao dos numeros e: %d\n", resultado);
    } else {
        printf("A multiplicaçao nao resulta em um numero inteiro.\n");
    }

    return 0;
}
