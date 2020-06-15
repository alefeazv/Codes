#Ao invés do índice ser um número, eu posso dar um nome, outra coisa, etc
dados=dict()
dados={'nome':'Pedro', 'idade':25}
print(dados['nome'])
print(dados['idade'])
dados['sexo']='Masculino'
print(dados['sexo'])
del dados['idade']
print(dados)
print(dados.values())
print(dados.keys())
print(dados.items())
for k,v in dados.items():
    print('O', k, 'é', v)
filme=
