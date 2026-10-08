/*
    3. Faça um programa, com uma função que necessite 
    de três argumentos, e que forneça a soma desses 
    três argumentos. Utilize passagem por referência.
*/

#include <iostream>

void somaValores (int a, int b, int c, int &resultado);

int main () {
    int a = 5, b = 10, c = 25;
    int soma = 0;

    somaValores(a, b, c, soma);
    printf("A soma de %d + %d + %d = %d\n", a, b, c, soma);

    return 0;
}

void somaValores (int a, int b, int c, int &resultado) {
    resultado = a + b + c;
}

