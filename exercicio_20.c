//algoritimo que pega os 3 caracteres digitados e coloque em ordem alfabetica

#include <stdio.h>

int main() {
    char a, b, c, temp;

    printf("Digite o primeiro caractere: ");
    scanf(" %c", &a);
    printf("Digite o segundo caractere: ");
    scanf(" %c", &b);

    printf("Digite o terceiro caractere: ");
    scanf(" %c", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Caracteres em ordem alfabetica: %c %c %c\n", a, b, c);

    return 0;
}
