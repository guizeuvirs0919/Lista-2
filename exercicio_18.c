#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma vogal: ");
    scanf("%c", &letra);

    if (letra == 'o' || letra == 'O') {
        printf("Você digitou 'o'. A resposta e'e'.\n");
    } else {
        printf("Você nao digitou 'o'. A resposta e a letra que voce digitou: %c.\n", letra);
    }

    return 0;
}
