''' 01. Escreva um programa que leia 5 números de um arquivo,
    calcule a média e apresente o resultado no console no formato:
    "A média dos 5 números é 44.5" '''

def registrar_num():
    arq = open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\01_atividade\\num.txt", "w")

    for i in range(5):
        valor = float(input(f"Digite o {i+1} número: ").replace(',', '.'))
        arq.write(f"{valor}\n")    #Como só aceita string, temos que burlar.
    
    arq.close()
    print("Números salvos!")


def calcular_media():
    num = []

    with open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\01_atividade\\num.txt", "r") as arq:

        for linha in arq:
            num.append(float(linha.strip()))
    
    if len(num) == 5:
        media = sum(num) / len(num)
        print(f"A média dos 5 números é {media:.1f}")
    
    else:
        print("O arquivo não tem 5 números válidos.")


registrar_num()
calcular_media()
