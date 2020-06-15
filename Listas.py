#Listas
num=[1,2,3,4,5]
for i in num:
    print(i)
num.append(11)#Adciona um valor a mais, ou seja, acrescenta um índice
for i in num:
    print(i)
num.insert(0, 100)#insere um valor sem substituir o índice, utilizando o índice e o valor que vai ser usado
for i in num:
    print(i)
del num[3]#elimina pelo índice
num.pop(5)#Elimina o que têm no último índice, e se usado(), pode indicar o índice a ser alterado
num.remove(2)#elimina usando o valor que contém no índice, e não pelo número do índice
print('')
for i in num:
    print(i)
    if 4 in num:
        num.remove(4)
teste=list(range(4,8))
print(teste)
print('')
teste=list(range(4,8,2))#Ele para no valor atual -1, nesse caso é o 8, ele para no sete, e o último termo é de quantos em quantos ele vai pulando
print(teste)
valores=[8,5,7,0,2,3,4]
valores.sort()
print(valores)
valores.sort(reverse=True)
print(valores)
print(len(valores))
