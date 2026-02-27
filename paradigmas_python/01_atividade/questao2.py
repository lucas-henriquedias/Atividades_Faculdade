''' 2. Faça um programa que leia 3 número no console e calcule 
a média e imprima o resultado no console.'''

media = 0
for i in range(3):
    num = int(input(f"Digite o {i+1} número: "))
    media += num

print(f"A média é {media / 3}.")