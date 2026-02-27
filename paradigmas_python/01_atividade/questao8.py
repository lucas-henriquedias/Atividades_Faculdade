''' 8. Escreva um programa que leia 3 números do console e 
se eles formam um triângulo.'''

a = float(input("Informe o valor do lado A: "))
b = float(input("Informe o valor do lado B: "))
c = float(input("Informe o valor do lado C: "))

if (a + b > c) and (a + c > b) and (b + c > a):
    print("\nEsse triângulo existe!")
else:
    print("\nEsse triângulo é impossível!")