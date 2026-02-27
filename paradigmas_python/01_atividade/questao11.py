''' 11. Escreva um programa que calcule os N primeiros números primos 
e retorne em uma lista.'''

def eh_primo(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    try:
        n = int(input("Quantos números primos deseja encontrar? "))
        if n <= 0:
            print("Digite um número positivo maior que zero!")
            return
        
        primos = []
        numero = 2 
        
        while len(primos) < n:
            if eh_primo(numero):
                primos.append(numero)
            numero += 1
        
        print(f"\nOs {n} primeiros números primos são:")
        print(primos)
        
    except ValueError:
        print("Erro! Digite um número inteiro válido.")

if __name__ == "__main__":
    main()