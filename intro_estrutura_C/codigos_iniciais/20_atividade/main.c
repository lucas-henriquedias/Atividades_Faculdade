#include <stdio.h>

int main() {
    char nome[50]; 
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); // fgets lê o nome com espaços

    printf("Digite sua idade: ");
    scanf("%d", &idade);

 
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);

    return 0;
}
