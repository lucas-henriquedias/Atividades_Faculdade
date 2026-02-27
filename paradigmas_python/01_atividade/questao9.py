''' 9. Escreva um programa que leia 3 números do console
 e se eles formam um triângulo. Caso positivo classificar 
 como triângulo equilátero, isósceles ou escaleno e ainda 
 se é retângulo ou não.'''

a = float(input("Informe o valor do lado A: "))
b = float(input("Informe o valor do lado B: "))
c = float(input("Informe o valor do lado C: "))

if (a + b > c) and (a + c > b) and (b + c > a) and (a > 0 and b > 0 and c > 0):
    print("O triângulo existe.")
    if a == b == c:
        print("Tipo: Equilátero.")
    elif a == b or a == c or b == c:
        print("Tipo: Isósceles.")
    else:
        print("Tipo: Escaleno.")

    lados = [a, b, c]
    lados.sort()
    cateto1, cateto2, hip = lados

    if abs(hip**2 == (cateto1**2 + cateto2**2)) < 0.0001:
        print("É triângulo retangulo.")

else:
    print("\nEsse triângulo é impossível!")