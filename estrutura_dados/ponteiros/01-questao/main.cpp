/*
    1. Escreva um programa que contenha duas variáveis inteiras
    inicializadas. Associe-as a ponteiros. Em seguida, mostre
    seus endereços e exiba o conteúdo do maior endereço.
*/

#include <iostream>

int main () {
    int a = 5, b = 2;
    int *ptrA = &a;
    int *ptrB = &b;

    std::cout << "Endereco de a: " << (void*)ptrA << std::endl;
    std::cout << "Endereco de b: " << (void*)ptrB << std::endl;

    printf("\n");
    if (ptrA > ptrB) {
        std::cout << "O maior endereco é de a: " << (void*)ptrA << std::endl;
        std::cout << "Valor armazenado: " << *ptrA << std::endl;
    } else {
        std::cout << "O maior endereco é de b: " << (void*)ptrB << std::endl;
        std::cout << "Valor armazenado: " << *ptrB << std::endl;
    }

    return 0;
}

