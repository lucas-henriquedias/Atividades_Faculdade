''' 4. Faça um programa que solicite do console 5 nomes, inclua estes nomes 
em uma lista e imprima a lista em ordem crescente.'''

nomes = []

for i in range(5):
    nome = input(f"Escreva o {i+1} nome: ")
    nomes.append(nome)

nomes.sort(key=len)
print(nomes)