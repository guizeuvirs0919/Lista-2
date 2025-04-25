#include <stdio.h>

int main() {

    float valor1, valor2;
    char caractere1, caractere2, caractere3, caractere4, caractere5;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);

    printf("Digite o primeiro caractere: ");
    scanf(" %c", &caractere1);  // O espaço antes do %c é para limpar o buffer de entrada

    printf("Digite o segundo caractere: ");
    scanf("%c", &caractere2);

    printf("Digite o terceiro caractere: ");
    scanf("%c", &caractere3);

    printf("Digite o quarto caractere: ");
    scanf("%c", &caractere4);

    printf("Digite o quinto caractere: ");
    scanf("%c", &caractere5);

    printf("\nVocê digitou os seguintes valores:\n");
    printf("Valores reais: %.2f e %.2f\n", valor1, valor2);
    printf("Caractere 1: %c\n", caractere1);
    printf("Caractere 2: %c\n", caractere2);
    printf("Caractere 3: %c\n", caractere3);
    printf("Caractere 4: %c\n", caractere4);
    printf("Caractere 5: %c\n", caractere5);

    return 0;
}
