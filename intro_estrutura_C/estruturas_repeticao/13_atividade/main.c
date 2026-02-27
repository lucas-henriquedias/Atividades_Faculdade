#include <stdio.h>

double calcularQuadrado(double numero){
    return numero * numero;
}

int main(){
    double numero, resultado;
    printf("Digite um número: ");
    scanf("%lf", &numero);
    
    resultado = calcularQuadrado(numero);
    printf("O quadrado de %.1lf é %.1lf\n", numero, resultado);
}
