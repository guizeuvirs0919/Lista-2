//algoritio que usa memorização para calcula a sequencia de fiobancci

#include <stdio.h>

#define MAX 1000

long long int memo[MAX];

long long int fibonacci(int n) {
    if (n <= 1) return n;

    if (memo[n] != -1) return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;

    printf("Digite até qual termo da sequência de Fibonacci deseja ver (até %d): ", MAX - 1);
    scanf("%d", &n);

    if (n < 0 || n >= MAX) {
        printf("Número inválido, Digite um valor entre 0 e %d.\n", MAX - 1);
        return 1;
    }

    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }

    printf("Sequência de Fibonacci até o termo %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%lld ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
