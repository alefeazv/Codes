nome="teste.txt"
#C:\Users\Álefe\Pictures\Forma de programar em Python
f=open("C:/Users/Álefe/Videos/Captures/"+nome,"a")
#r - read - leitura
#a - append - anexar
#w - write - Escrita
#x - create - criar
#t - texto
#b - binário
txt=input("Digite um texto:")
f.write(txt+"\n")
f.close()