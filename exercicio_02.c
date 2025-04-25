#include <stdio.h>

int main() {
    float altura;
    char genero;

    printf("Digite sua altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite seu genero (M para masculino, F para feminino): ");
    scanf(" %c", &genero); // espaço antes do %c pra ignorar o ENTER anterior

    if (genero == 'M' || genero == 'm') {
        if (altura > 1.75) {
            printf("Voce esta acima da altura media nacional para homens.\n");
        } else if (altura == 1.75) {
            printf("Voce esta na altura media nacional para homens.\n");
        } else {
            printf("Voce esta abaixo da altura media nacional para homens.\n");
        }
    } else if (genero == 'F' || genero == 'f') {
        if (altura > 1.62) {
            printf("Voce esta acima da altura media nacional para mulheres.\n");
        } else if (altura == 1.62) {
            printf("Voce esta na altura media nacional para mulheres.\n");
        } else {
            printf("Voce esta abaixo da altura media nacional para mulheres.\n");
        }
    } else {
        printf("Genero invalido. Use 'M' ou 'F'.\n");
    }

    return 0;
}
