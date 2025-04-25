

#include <stdio.h>

int main() {
    char letra;
    int limite, contador = 0;

    printf("Digite o numero máximo de letras que você pode escrever: ");
    scanf("%d", &limite);

    getchar();

    printf("Digite ate %d letras (uma por vez):\n", limite);

    while (contador < limite) {
        printf("Digite a letra %d: ", contador + 1);
        letra = getchar();  // Lê uma letra
        getchar();

        printf("Você digitou a letra: %c\n", letra);
        contador++;
    }

    printf("Você digitou %d letras. Programa encerrado.\n", contador);

    return 0;
}
