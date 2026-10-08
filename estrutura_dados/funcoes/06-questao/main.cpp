/*
    6. Crie uma função que receba como argumento um vetor e o seu
    tamanho retorna a soma de todos os elementos do vetor.
*/

#include <iostream>

int soma (int vetor[], int tamanho);

int main () {
    int valores[] = {10, 17, 20, 25, 45};
    int tam = 5;

    int total = soma(valores, tam);
    std::cout << "Soma: " << total << std::endl;

    return 0;
}

int soma (int vetor[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return soma;
}

