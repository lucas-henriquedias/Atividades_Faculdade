''' 5. Escreva um programa que calcule a média dos números 
de uma lista de qualquer tamanho.'''

num = []

while True:
    try:
        quat = int(input("Quantos números vai querer calcular: "))
        
        if quat <= 0:
            print("O numero não pode ser menor que zero.")
            continue

        break

    except ValueError:
        print("Valor deve ser um número inteiro.")


for i in range(quat):
    while True:
        try:
            valor = float(input(f"Digite o {i+1} valor: "))
            num.append(valor)
            break

        except ValueError:
            print("Digite apenas números.")

soma = 0

for i in range(quat):
    soma += num[i]


print("-" *30)
print(f"Números digitados: {num}")
print(f"Média: {soma/quat:.2f}")
