//algoritimo que que pede o comprimento, altura e largura de um objeto para determinar o volume do objeto 

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

    printf("O volume do objeto é: %.2f metros cúbicos\n", volume);

    return 0;
}
