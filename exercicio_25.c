#include <stdio.h>

int main() {
    int numeros[6];

    printf("Digite 6 n�meros para o sorteio:\n");

    for (int i = 0; i < 6; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nN�meros escolhidos para o sorteio:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
