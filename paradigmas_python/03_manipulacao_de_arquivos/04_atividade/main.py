''' 04. Escreva um programa que solicite no console o nome do aluno e as 3 notas de prova. Depois
    calcule a média das 3 notas e determine se o aluno passou ou não. Para passar a média deve ser 
    maior ou iguaç a 6. Por fim o programa deve imprimir o resultado no console com a seguinte
    formatação: "Maria Eduarda teve notas 4.5, 5.5 e 5. A média foi 5.0 e o aluno foi reprovado.'''

def ler_nota(mensagem):
    while True:
        try:
            nota = float(input(mensagem).replace(',', '.'))

            if 0 <= nota <= 10:
                return nota
            
            else:
                print("A nota deve ser entre 0 a 10.")
        
        except ValueError:
            print("Digite apenas número.")


def registrar_aluno():
    aluno = input("Qual o nome do aluno: ")

    nota1 = ler_nota("1 nota: ")
    nota2 = ler_nota("2 nota: ")
    nota3 = ler_nota("3 nota: ")

    media = (nota1 + nota2 + nota3) / 3

    if media >= 6:
        situacao = "aprovado"
    
    else:
        situacao = "reprovado"

    print("="*30)
    print(f"{aluno} teve notas {nota1:.1f}, {nota2:.1f} e {nota3:.1f}. "
          f"A media foi {media:.1f} e o aluno foi {situacao}")
    print("="*30)


if __name__ == "__main__":
    registrar_aluno()