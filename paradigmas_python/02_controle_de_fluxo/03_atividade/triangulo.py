''' 3. Escreva um programa que leia 3 números do console e 
se eles formam um triângulo.'''

def ler_dados():
    lados = []
    i = 0

    while i < 3:
        try:
            valor = float(input(f"Informe o {i+1} valor: "))

            if valor <= 0:
                print("O valor deve ser positivo.")
                continue

            lados.append(valor)
            i += 1
        
        except ValueError:
            print("Digite um valor válido!")

    return lados
            

print("Verificando Triangulo.")
print("-" * 30)

lados = ler_dados()
a, b, c = lados

if (a + b > c) and (a + c > b) and (b + c > a):
    print(f"Os lados {a}, {b} e {c} forma um triângulo.")

else:
    print("Isso não é um triângulo.")