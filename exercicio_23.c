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

    printf("Digite at� qual termo da sequ�ncia de Fibonacci deseja ver (at� %d): ", MAX - 1);
    scanf("%d", &n);

    if (n < 0 || n >= MAX) {
        printf("N�mero inv�lido, Digite um valor entre 0 e %d.\n", MAX - 1);
        return 1;
    }

    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }

    printf("Sequ�ncia de Fibonacci at� o termo %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%lld ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
