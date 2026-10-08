/*
    2. Escreva uma função que, dado um número real passado como 
    parâmetro, retorne a parte inteira e a parte fracionária desse 
    número por referência.
*/

#include <iostream>

void decomporNumero (float numero, int &inteira, float &fracionaria);

int main () {
    float valor = 12.523;
    int inteira = 0;
    float fracionaria = 0;

    decomporNumero(valor, inteira, fracionaria);

    std::cout << "Numero Original: " << valor << std::endl;
    std::cout << "Parte Inteira: " << inteira << std::endl;
    std::cout << "Parte Fracionada: " << fracionaria << std::endl;

    return 0;
}

// Aqui usei & para ser possível mexer no valor das variáveis na sua raiz.
void decomporNumero (float numero, int &parteInt, float &parteFrac) {
    parteInt = (int)numero;
    parteFrac = numero - parteInt;
}


