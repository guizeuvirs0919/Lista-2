#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char sexo[10];
    char nacionalidade[20];
    char deficiencia[10];

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o sexo (Masculino/Feminino): ");
    scanf("%s", sexo);

    printf("Digite a nacionalidade: ");
    scanf("%s", nacionalidade);

    printf("Possui alguma deficiencia grave? (Sim/N�o): ");
    scanf("%s", deficiencia);

    if (idade >= 18 && idade <= 45 &&
        (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0) &&
        (strcmp(nacionalidade, "Brasileiro") == 0 || strcmp(nacionalidade, "brasileiro") == 0) &&
        (strcmp(deficiencia, "Nao") == 0 || strcmp(deficiencia, "nao") == 0 || strcmp(deficiencia, "Nao") == 0)) {

        printf("\nCidad�o Apto ao alistamento militar obrigatorio.\n");
    } else {
        printf("\nCidad�o Nao pode  fazer o alistamento militar obrigatorio.\n");
    }

    return 0;
}
