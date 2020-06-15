import sqlite3
from sqlite3 import Error

def ConexaoBanco():
    caminho="C:\\Users\\Álefe\\Documents\\Desenvolvimento de Softwares\\IEB Pombal"
    con=None#variável conexão
    try:
        con=sqlite3.connect(caminho)
    except Error as ex:
        print(ex)
    return con
#Criar tabela
vsql="""CREATE TABLE IEB_Pombal(


        );"""