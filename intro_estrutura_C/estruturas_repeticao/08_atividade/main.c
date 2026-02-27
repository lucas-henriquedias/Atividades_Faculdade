#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;
    
    while (numero <= 10){
        soma += numero;
        numero++;
    }
    printf("A soma dos 10 primeiros números é: %d\n", soma);
}
