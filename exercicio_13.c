//algorito que pede pro usuario seu dia, mes e ano de nascimento, e no final calcula a sua idade em meses 

#include <stdio.h>

int main() {
    int diaNasc, mesNasc, anoNasc;
    int diaAtual, mesAtual, anoAtual;
    int idadeMeses;

    printf("Digite o dia de nascimento (dd): ");
    scanf("%d", &diaNasc);
    printf("Digite o mês de nascimento (mm): ");
    scanf("%d", &mesNasc);
    printf("Digite o ano de nascimento (aaaa): ");
    scanf("%d", &anoNasc);

    printf("Digite o dia atual (dd): ");
    scanf("%d", &diaAtual);
    printf("Digite o mes atual (mm): ");
    scanf("%d", &mesAtual);
    printf("Digite o ano atual (aaaa): ");
    scanf("%d", &anoAtual);

    idadeMeses = (anoAtual - anoNasc) * 12 + (mesAtual - mesNasc);

    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idadeMeses--;
    }

    printf("Sua idade em meses é: %d meses\n", idadeMeses);

    return 0;
}
