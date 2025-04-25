//algorito que pede um valor real 

#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor real (numero com ponto decimal): ");
    scanf("%f", &valor);

    printf("Voce digitou: %.2f\n", valor);

    return 0;
}
