//algorito que vai receber 3 algoritos a, b, c que calculem a forma de bhaskara

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;


    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Não é uma equação do segundo grau (a não pode ser zero).\n");
    } else {

        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("A equação não possui raízes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("A equação possui uma raiz real: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("A equação possui duas raizes reais:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
