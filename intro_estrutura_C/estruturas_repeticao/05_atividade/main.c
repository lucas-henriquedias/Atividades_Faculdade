// Forçar o usuário a digitar um número maior que 10.

#include <stdio.h>

int main(void) {
    float numero;
    
    do {
        printf ("Digite um número maior que 10: ");
        scanf ("%f", &numero);
        
    } while (numero <= 10); 
    
    printf ("Você digitou um número válido!\n");

    return 0; 
}
