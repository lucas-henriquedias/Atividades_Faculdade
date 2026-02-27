''' 12. Escreva um programa que calcule o fatorial de um número.'''

fat = 1

print("\n=== Calculando Fatorial ===")
num = int(input("Qual número: "))

for i in range(1, num + 1):
    fat *= i

print(f"O fatorial de {num} é {fat}.")