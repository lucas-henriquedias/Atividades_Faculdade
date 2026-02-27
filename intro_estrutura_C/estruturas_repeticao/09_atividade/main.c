#include <stdio.h>

int main() {
    float numero, soma = 0, media = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d° numero: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / 10;

    printf("A soma dos 10 números é: %.2f\n", soma);
    printf("A média dos 10 números é: %.2f\n", media);

    return 0;
}
