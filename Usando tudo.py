print('E aí parça, beleza? Vamo fazer um programa louco agora!')
print('Digite dois números e duas palavras, nessa ordem!')
x=int(input())
y=int(input())
a=input()
b=input()
print(a.upper())
print(a.lower())
print(a.islower())#verifica se a variável está toda em minúscula
print(a.isupper())#verifica se a variável está toda em maiúscula
print(x,y,a,b)
print('Agora, vamos imprimir as palavras de forma horizontal')
for i in a:
    print(i)
print('')
for i in b:
    print(i)
print('Tamanho da string 1:',len(a))
cont=int(0)
while cont < len(a) :
    print(a, b, x, y)
    cont= cont+1

