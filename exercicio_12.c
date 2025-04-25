//algorito que vc define o quanto de letras o usuario pode escrever

#include <stdio.h>
#include <string.h>

int main() {
    char letra[6]; 

    printf("Digite até 5 letras: ");
    fgets(letra, sizeof(letra), stdin);

    printf("Você digitou: %s\n", letra);

    return 0;
}

