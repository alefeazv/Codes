str1="Lindooo"
str2="Álefe é "
name= str2+str1
print(name)
first=str2[0]
print(first)
#strings são representadas por aspas duplas, passe a escrever com aspas simples
#o que não for ser usado como dado
for i in str1:
    print(i)
print(name[0:6])
print(str1[0:4])
print(str2[4:8])
print(str1[:4])
print(str1[0:])
low= str1.lower()
print(low)
up= str1.upper()
print(up)
print(type(str1))
if 'n' in str1:
    print('A letra n aparece')
    if'n' in str2:
        print('A letra n aparece')
    else:
        print('A letra n não aparece')
fruta=input('Digite uma palavra:')
fruta2=input('Digite uma palavra:')
if fruta == fruta2:
    print(fruta, fruta2)
elif fruta < fruta2:
    print('A menor palavra é: ' + fruta + ' e a maior palavra é: ' + fruta2)
elif fruta > fruta2:
    print(fruta2, fruta)
dir(str1)#Printa isso e aparece um mói de coisa
re=str2.replace('Álefe', 'Brenda')
print(re+str1)
t1=" Baba "
t11=t1.rstrip()#r de right, strip(space)
t111=t1.lstrip()#l de left, strip(space)
t1111=t1.strip()
print(t1)
print(t11)
print(t1)
print(t111)
print(t1)
print(t1111)
p=str1.startswith('Lindooo')
print(p)
p=str1.startswith('lindooo')
print(p)
st="helo"
stt='oi'
sr=st+stt
print(sr)
ss=st.find('o')
print(ss)
text = "X-DSPAM-Confidence:    0.8475"
f=text.find('0')
s=text[f:]
x=float(s)
print(x)
