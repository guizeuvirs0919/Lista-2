//algoritimo que pega uma valor decimal dititado e transforma em inteiro

#include <stdio.h>

int main() {
    float valorFloat;
    int valorInteiro;

    printf("Digite um valor decimal (float): ");
    scanf("%f", &valorFloat);

    valorInteiro = (int)valorFloat;

    printf("Valor convertido para inteiro: %d\n", valorInteiro);

    return 0;
}
