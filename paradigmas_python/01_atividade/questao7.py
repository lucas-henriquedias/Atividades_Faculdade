''' 7. Faça um programa que calcule e imprima a tabuada do 0 
ao 10, no formato de tabela.'''

import time

def carregamento():
    print(" .", end="", flush=True)
    time.sleep(0.25)

while True:
    print("\n=== Tabuada ===")
    num = int(input("\nQual número gostaria de saber a tabuada: "))

    print("\nCalculando", end="")
    for i in range(6):
        carregamento()
    print("\n")

    for i in range(11):
        result = num + i
        print(f"{num} + {i} = {result}")
    print("")

    for i in range(11):
        result = num - i
        print(f"{num} - {i} = {result}")
    print("")
    
    for i in range(11):
        result = num * i
        print(f"{num} x {i} = {result}")
    print("")

    for i in range(1, 11):
        result = num / i
        if num % i == 0:
            print(f"{num} : {i} = {result:.0f}")
        else:
            print(f"{num} : {i} = {result:.1f}")

    while True:
        escolha = input("\nGostaria de ver a tabuada de outro número?\n1. Sim\n2. Não\n\n >> ")

        if escolha == "1":
            break
        elif escolha == "2":
            print("\nEncerrando o Programa", end="")
            carregamento()
            exit()
        else:
            print(f'\nOps... A opção "{escolha}" é inválida.')
            time.sleep(2)
