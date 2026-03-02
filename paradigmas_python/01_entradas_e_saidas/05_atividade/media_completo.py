''' 5. Faça um programa que solicite no console 5 números, inclua
    estes números em uma lista, calcule a média e imprima a média
    e a lista em ordem decrescente.'''

import os

lista = []
media, count = 0, 0

os.system("cls")
for i in range(5):
    num = float(input(f"Digite o {i+1} número: "))
    lista.append(num)
    media += num
    count = i + 1

print(media / count)
lista.sort(reverse=True)
print(lista)