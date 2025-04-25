//algoritimo que faz um cardapio e que o usuario pode escolher as opções 

#include <stdio.h>

int main() {
    int opcao;

    printf("===== CARDÁPIO =====\n");
    printf("1 - Hamburguer\n");
    printf("2 - Pizza\n");
    printf("3 - Salada\n");
    printf("4 - Refrigerante\n");
    printf("5 - Sorvete\n");
    printf("====================\n");

    printf("Escolha uma opçao (1 a 5): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Voce escolheu: Hamburguer\n");
    } else if (opcao == 2) {
        printf("Voce escolheu: Pizza\n");
    } else if (opcao == 3) {
        printf("Voce escolheu: Salada\n");
    } else if (opcao == 4) {
        printf("Voce escolheu: Refrigerante\n");
    } else if (opcao == 5) {
        printf("Voce escolheu: Sorvete\n");
    } else {
        printf("Opção inválida. Por favor, escolha um número de 1 a 5.\n");
    }

    return 0;
}
