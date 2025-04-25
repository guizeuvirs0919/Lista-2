#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero (dividendo): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero (divisor): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: divisao por zero não é permitida.\n");
    } else {

        if (num1 % num2 == 0) {
            int resultado = num1 / num2;
            printf("Resultado da divisao exata: %d\n", resultado);
        } else {
            printf("A divisao de %d por %d não e exata (não resulta em numero inteiro).\n", num1, num2);
        }
    }

    return 0;
}
