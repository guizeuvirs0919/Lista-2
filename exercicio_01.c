#include <stdio.h>

int main() {
    float lado1, lado2, lado3;


    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);


    if ((lado1 < lado2 + lado3) &&
        (lado2 < lado1 + lado3) &&
        (lado3 < lado1 + lado2)) {


        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triângulo Equilátero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }

    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}
