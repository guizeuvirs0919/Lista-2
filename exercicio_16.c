#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura em metros: ");
    scanf("%f", &largura);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume do objeto �: %.2f metros c�bicos\n", volume);

    return 0;
}
