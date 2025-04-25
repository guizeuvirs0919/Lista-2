#include <stdio.h>

int main() {
    float R1, R2, Req;

    printf("Digite o valor da resistencia R1 (em ohms): ");
    scanf("%f", &R1);

    printf("Digite o valor da resistencia R2 (em ohms): ");
    scanf("%f", &R2);

    if (R1 <= 0 || R2 <= 0) {
        printf("Erro: as resistencias devem ser maiores que zero.\n");
    } else {

        printf("A resistencia equivalente e: %.2f ohms\n", Req);
    }

    return 0;
}
