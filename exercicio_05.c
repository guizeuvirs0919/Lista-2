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
        printf("N�o � uma equa��o do segundo grau (a n�o pode ser zero).\n");
    } else {

        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("A equa��o n�o possui ra�zes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("A equa��o possui uma raiz real: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("A equa��o possui duas raizes reais:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
