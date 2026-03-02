''' 4. Escreva um programa que leia 3 números do console
 e se eles formam um triângulo. Caso positivo classificar 
 como triângulo equilátero, isósceles ou escaleno e ainda 
 se é retângulo ou não.'''

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
    print(f"\n✅ Os lados {a}, {b} e {c} formam um triângulo!")

    if a == b == c:
        print("Esse triângulo é Equilátero!")

    elif a == b or a == c or b == c:
        print("Esse triângulo é Isósceles!")

    else:
        print("Esse triângulo é Escaleno!")

else:
    print("Isso não é um triângulo.")