//algorito que pega dois numeros e some e depois mostra o resultado

#include <stdio.h>

int main() {
    int num1, num2, soma;


    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d e %d e: %d\n", num1, num2, soma);

    return 0;
}
