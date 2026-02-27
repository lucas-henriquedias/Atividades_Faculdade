#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número para exibir a tabuada: ");
    scanf("%d", &numero);

    // Exibe a tabuada do número inserido
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
