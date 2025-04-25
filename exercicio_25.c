// algoritimo que fala pro usuario escolher 6 numeros de um sorteio

#include <stdio.h>

int main() {
    int numeros[6];

    printf("Digite 6 números para o sorteio:\n");

    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros escolhidos para o sorteio:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
