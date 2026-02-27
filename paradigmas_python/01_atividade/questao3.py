''' 3. Faça um programa que calcula a media dos números de uma 
lista com 5 números informada previamente pelo programa.'''

num = [7, 4, 10, 10, 8]
media, count = 0, 0

for i in range(len(num)):
    media += num[i]
    count = i + 1

print(media / count)