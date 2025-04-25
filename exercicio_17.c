#include <stdio.h>

int main() {
    int numeros[5];
    int i, j, temp;

    printf("Digite 5 n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os n�meros de lugar
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("\nOs n�meros em ordem crescente s�o:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
