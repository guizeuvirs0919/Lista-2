#include <stdio.h>

int main() {
    float num1, num2;
    int resultado;

    printf("Digite o primeiro n�mero real: ");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero real: ");
    scanf("%f", &num2);

    float multiplicacao = num1 * num2;

    if (multiplicacao == (int)multiplicacao) {
        resultado = (int)multiplicacao;
        printf("A multiplica�ao dos numeros e: %d\n", resultado);
    } else {
        printf("A multiplica�ao nao resulta em um n�mero inteiro.\n");
    }

    return 0;
}
