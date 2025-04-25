#include <stdio.h>

int main() {
    char letra;
    int limite, contador = 0;

    printf("Digite o numero m�ximo de letras que voc� pode escrever: ");
    scanf("%d", &limite);

    getchar();

    printf("Digite ate %d letras (uma por vez):\n", limite);

    while (contador < limite) {
        printf("Digite a letra %d: ", contador + 1);
        letra = getchar();  // L� uma letra
        getchar();  // Captura o caractere '\n' deixado pelo enter

        printf("Voc� digitou a letra: %c\n", letra);
        contador++;
    }

    printf("Voc� digitou %d letras. Programa encerrado.\n", contador);

    return 0;
}
