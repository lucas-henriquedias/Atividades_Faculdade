''' 03. Escreva um programa que calcule a média dos números de uma lista em 
um arquivo, não importando a quantidade de números que tem no arquivo e apresente 
o resultado no console no formato: "A média dos 50 números é 55.5" '''

def registrando_num():

    quant = 0

    while True:
        try:
            quant = int(input("Quantos números quer calcular: "))

            if quant <= 0:
                print("A quantidade deve ser maior que 0.")
                continue

            else:
                break

        except ValueError:
            print("Digite apenas números.")
    
    num = []

    for i in range(quant):
        while True:
            try:
                valor = float(input(f"Digite o {i+1} valor: ").replace(',', '.'))
                num.append(valor)
                break

            except ValueError:
                print("Digite um número válido")
    
    with open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\03_atividade\\num.txt", "w", encoding="utf-8") as arq:
        for j in num:
            arq.write(f"{j}\n")

        print("Lista salva!")
        print(f"Números salvos: {num}")


def calcular_media():

    numeros = []
    media = 0
    
    with open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\03_atividade\\num.txt", 'r', encoding="utf-8") as arq:
        for linha in arq:
            numeros.append(float(linha.strip()))
    
    if len(numeros) > 0:
        media = sum(numeros) / len(numeros)
        print(f"A média dos {len(numeros)} números é {media:.2f}")
    
    else:
        print("O arquivo está vazio.")
        

registrando_num()
calcular_media()
