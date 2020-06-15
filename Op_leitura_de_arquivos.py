nome="words.txt"
f=open("C:/Users/Álefe/Videos/Captures/"+nome,"rt")
#print(f.read()) lê o arquivo todo
#print(f.readline()) lê linhas

for l in f:#Imprime linha por linha
    print(l)

f.close()
