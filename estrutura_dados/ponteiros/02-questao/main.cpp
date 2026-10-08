/*
    2. Dada as variáveis e, d, c, b, a. Demonstre a Indireção
    múltipla através de uma codificação em C e imprima os
    valores e endereços de memória de todas as variáveis.
*/

#include <iostream>
#include <cstdio>

int main () {
    int a = 10;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;

    printf("Valor de a: %d | Endereco: %p\n", a, &a);
    printf("Valor de *b: %p | Endereco: %p\n", b, &b);
    printf("Valor de *c: %p | Endereco: %p\n", c, &c);
    printf("Valor de *d: %p | Endereco: %p\n", d, &d);
    printf("Valor de *e: %p | Endereco: %p\n", e, &e);
}

