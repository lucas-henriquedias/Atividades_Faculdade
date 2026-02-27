#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; 
        }
    }
    return true;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
