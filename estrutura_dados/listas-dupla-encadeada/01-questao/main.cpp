/*
    1. Implemente uma lista duplamente encadeada
    com:
        - Inserção no início;
        - Inserção no final;
        - Impressão do início ao fim;
*/

#include <iostream>

struct No {
    int valor;
    No* anterior;
    No* proximo;
};

void inserirValor(No* &pontoZero, int valor);
void imprimirValor(No* pontoZero);
//================================================

int main () {
    No* pontoZero = NULL;
    
    inserirValor(pontoZero, 5050);
    inserirValor(pontoZero, 13);
    inserirValor(pontoZero, 5070);
    inserirValor(pontoZero, 50999);
 
    imprimirValor(pontoZero); 

    return 0;
}

void inserirValor (No* &pontoZero, int valor) {
    No* novo = new No();
    novo->valor = valor;

    novo->proximo = pontoZero;
    novo->anterior = NULL;

    if (pontoZero != NULL) {
        pontoZero->anterior = novo;
    }

    pontoZero = novo;
}

void imprimirValor (No* pontoZero) {
    No* atual = pontoZero;

    while (atual != NULL) {
        std::cout << atual->valor << " <-> ";
        atual = atual->proximo;
    }

    std::cout << "Lista Vazia\n";
}