#include <stdio.h>

int main() {
    int anoInicio, anoFim;


    printf("Digite o ano inicial: ");
    scanf("%d", &anoInicio);

    printf("Digite o ano final: ");
    scanf("%d", &anoFim);


    if (anoInicio >= anoFim) {
        printf("O ano inicial deve ser menor que o ano final.\n");
    } else {
        printf("Anos bissextos entre %d e %d:\n", anoInicio, anoFim);

        for (int ano = anoInicio; ano <= anoFim; ano++) {

            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("%d\n", ano);
            }
        }
    }

    return 0;
}
