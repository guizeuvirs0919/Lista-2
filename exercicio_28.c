#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor real (n�mero com ponto decimal): ");
    scanf("%f", &valor);

    printf("Voc� digitou: %.2f\n", valor);

    return 0;
}
