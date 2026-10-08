/*
    3. Escreva um programa que declare um inteiro, um double e 
    um char, e ponteiros para inteiro, double, e char. Associe 
    as variáveis aos ponteiros (use &). Modifique os valores de
    cada variável usando os ponteiros. Imprima os valores das
    variáveis antes e após a modificação.
*/

#include <iostream>
#include <cstdio>

int main () {
    int num = 10;
    double decimal = 2.5;
    char letra = 'l';

    int *ptrNum = &num;
    double *ptrDecimal = &decimal;
    char *ptrLetra = &letra;

    printf("Valores Originais: ");
    printf("num = %d | decimal = %.2f | letra %c\n", num, decimal, letra);
    printf("-----------------------------------\n");

    *ptrNum = 20;
    *ptrDecimal = 5.5;
    *ptrLetra = 'L';

    printf("Valores Finais: ");
    printf("num = %d | decimal = %.2f | letra %c\n\n", num, decimal, letra);

    return 0;
}
