/*
    1. Elabore uma função que receba três notas de um aluno como parâmetro e uma 
    letra. 
        – Se a letra for ‘A’, a função deve calcular a média aritmética das notas 
        do aluno; se a 
        – letra for ‘P’, deverá calcular a média ponderada, com pesos 5, 
        3 e 2. Retorne a 
        – média calculada para o programa principal.
*/

#include <iostream>

double calcularMedia(double n1, double n2, double n3, char tipo);

int main() {
    double nota1 = 8.0, nota2 = 7.0, nota3 = 9.0;
    
    // Testando a Média Aritmética ('A')
    double mediaA = calcularMedia(nota1, nota2, nota3, 'A');
    std::cout << "Media Aritmetica: " << mediaA << std::endl;

    // Testando a Média Ponderada ('P')
    double mediaP = calcularMedia(nota1, nota2, nota3, 'P');
    std::cout << "Media Ponderada: " << mediaP << std::endl;

    return 0;
}

double calcularMedia(double n1, double n2, double n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } 
    else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5.0 + n2 * 3.0 + n3 * 2.0) / 10.0;
    } 
    else {
        std::cout << "Tipo de media invalido!" << std::endl;
        return 0.0;
    }
}


