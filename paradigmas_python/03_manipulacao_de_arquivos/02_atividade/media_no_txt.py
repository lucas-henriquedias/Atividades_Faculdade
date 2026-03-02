''' 02. Escreva um programa que leia 5 números de um arquivo, calcule a média
    e grave o resultado no final do arquivo original, no formato:
    "A média dos 5 números é 44.5" '''

def registrar_num():
    arq = open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\02_atividade\\num.txt", "w", encoding="utf-8")

    for i in range(5):
        valor = float(input(f"Digite o {i+1} número: ").replace(',', '.'))
        arq.write(f"{valor}\n")    #Como só aceita string, temos que burlar.
    
    arq.close()
    print("Números salvos!")


def calcular_media():
    num = []

    with open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\02_atividade\\num.txt", "r", encoding="utf-8") as arq:

        for linha in arq:
            num.append(float(linha.strip()))
    
    if len(num) == 5:
        with open("C:\\dev\\repositorios_programacao\\Estacio\\paradigmas_python\\03_manipulacao_de_arquivos\\02_atividade\\num.txt", "a", encoding="utf-8") as arq:

            media = sum(num) / len(num)
            texto = f"A média dos 5 números é {media:.1f}"

            arq.write(texto)
            print(texto)


    else:
        print("O arquivo não tem 5 números válidos.")


registrar_num()
calcular_media()