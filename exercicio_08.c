//algorito que pega seu nome, sua idade, seu genero e sua altura 

#include <stdio.h>

int main() {

    char nome[100];
    int idade;
    char genero;
    float altura;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu genero (M/F): ");
    scanf(" %c", &genero); 

    printf("Digite sua altura (em metros, exemplo 1.75): ");
    scanf("%f", &altura);

    printf("\n--- Dados do Usuário ---\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Genero: %c\n", genero);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
