#include <stdio.h>

int verificarParImpar (int numero){
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    verificarParImpar(numero);
}
