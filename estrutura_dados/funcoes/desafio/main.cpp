/*
    Desafio: Leia um número decimal (até 3 dígitos) e escreva o
    seu equivalente em numeração romana. Utilize funções para obter
    cada dígito do número decimal e para a transformação de numeração
    decimal para romano.

    Ex: ( 1 = I, 5 = V, 10 = X, 50 = L, 100 = C, 500 = D, 1.000 =
    M; e utilize um vetor guardando a tradução para cada um dos
    dígitos).
*/

#include <iostream>

std::string classificarNumero (int valor);
void obterValores (int valor, int &centena, int &dezena, int &unidade);


int main () {
    int numero;

    std::cout << "Digite um numero de até 3 digitos: ";
    std::cin >> numero;

    if (numero < 1 || numero > 999) {
        std::cout << "Numero fora do limite!" << std::endl;
        return 1;
    }

    std::string romano = classificarNumero(numero);
    std::cout << "O num " << numero << " em romano é: " << romano << std::endl;

    return 0;
}


std::string classificarNumero (int valor) {
    std::string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::string dezenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    std::string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    int c = 0, d = 0, u = 0;
    obterValores(valor, c, d, u);
    
    return centenas[c] + dezenas[d] + unidades[u];
}


void obterValores (int valor, int &centena, int &dezena, int &unidade) {
    centena = valor / 100;
    dezena = (valor % 100) / 10;
    unidade = valor % 10;
}

