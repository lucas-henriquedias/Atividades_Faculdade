/*
    5. Faça um programa para imprimir de acorod com a imagem abaixo
    para um n informado pelo usuário. Use uma função que receba um
    valor n inteiro e imprima até a n-ésima linha.
        1
        2 2
        ...
        n n n ... n
*/

#include <iostream>

void imprimir (int valor);

int main () {
    int valor = 9;
    imprimir(valor);
    
    return 0;
}

void imprimir (int valor) {
    int i, j;

    for (i = 1; i <= valor; i++) {
        for (j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        printf("\n");
    }
}


