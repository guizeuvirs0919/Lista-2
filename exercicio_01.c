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
            printf("Tri�ngulo Equil�tero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Tri�ngulo Is�sceles\n");
        } else {
            printf("Tri�ngulo Escaleno\n");
        }

    } else {
        printf("Os valores n�o formam um tri�ngulo.\n");
    }

    return 0;
}
