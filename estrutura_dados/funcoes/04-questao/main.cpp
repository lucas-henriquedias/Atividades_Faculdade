/*
    4. Faça um programa, com uma função que necessita de um argumento.
    A função retorna o valor de caractere 'P', se seu argumento for 
    positivo, e 'N', se seu argumento for zero ou negativo.
*/

#include <iostream>

char verificar (int numero);

int main () {

    std::cout << "Teste com 10: " << verificar(10) << std::endl;
    std::cout << "Teste com -37: " << verificar(-37) << std::endl;
    std::cout << "Teste com 0: " << verificar(0) << std::endl;

    return 0;
}

char verificar (int numero) {
    if (numero > 0) {
        return 'P';
    } else if (numero < 0) {
        return 'N';
    } else {
        return 'Z';
    }
}

