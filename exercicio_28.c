#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor real (número com ponto decimal): ");
    scanf("%f", &valor);

    printf("Você digitou: %.2f\n", valor);

    return 0;
}
