//algoritimo que faz um cardapio e que o usuario pode escolher as opções 1, 2, 3, 4 e 5

#include <stdio.h>

int main() {
    int opcao;

    printf("===== CARDÁPIO =====\n");
    printf("1 - Bomba de nitrogenio\n");
    printf("2 - Arroz com feijao em baixo\n");
    printf("3 - Salada\n");
    printf("4 - Guarana\n");
    printf("5 - Sorvete\n");
    printf("====================\n");

    printf("Escolha uma opçao (1 a 5): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Voce escolheu: Bomba de nitrogenio\n");
    } else if (opcao == 2) {
        printf("Voce escolheu: Arroz com feijao em baixo\n");
    } else if (opcao == 3) {
        printf("Voce escolheu: Salada\n");
    } else if (opcao == 4) {
        printf("Voce escolheu: Guarana\n");
    } else if (opcao == 5) {
        printf("Voce escolheu: Sorvete\n");
    } else {
        printf("Nao temos isso. Por favor, escolha um número de 1 a 5.\n");
    }

    return 0;
}
