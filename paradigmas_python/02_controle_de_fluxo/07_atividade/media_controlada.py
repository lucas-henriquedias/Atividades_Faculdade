''' 07. Escreva um programa que calcule a média de uma sequência de números informados no console.
    A sequência termina quando digitar for digitado zero.'''

num = []
quant = 0
soma = 0

while True:
    try:
        valor = float(input(f"Digite o {quant+1} valor: ").replace(',', '.'))

        if valor == 0:
            break

        else:
            num.append(valor)
            quant += 1
    
    except ValueError:
        print("Digite apenas números.")

for i in range(quant):
    soma += num[i]

print(f"Números digitados: {num}")
print(f"Média: {soma/quant:.2f}")