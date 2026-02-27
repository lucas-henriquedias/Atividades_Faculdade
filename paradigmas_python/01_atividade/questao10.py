''' 10. Escreva um programa que calcule a média dos números 
de uma lista de qualquer tamanho.'''

import time

num = []
soma = 0

try:
    quantidade = int(input("\nQuantos números vai querer calcular a média: "))
except ValueError:
    print("\nOps... Digite apenas número inteiros.")
    time.sleep(2)

for i in range(quantidade):
    try:
        numero = float(input(f"Digite o {i+1} número: "))
        num.append(numero)
        soma += numero
    except ValueError:
        print("\nDigite apenas números.\n")
        time.sleep(2)


print(num)
print(f"Média: {soma / quantidade:.2f}")
