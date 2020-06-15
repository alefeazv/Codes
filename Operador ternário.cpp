#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	float n1, n2, media;
	char op;
	string res;
	
	inicio:
	system("cls");
		
	cout << "Digite a primeira nota:\n";
	cin >> n1;
	cout << "Digite a segunda nota:\n";
	cin >> n2;
	media=(n1+n2)/2;
//   condição; "?"= se essa operação for verdadeira, armazene "Aprovado" na variável res, caso contrário":", armazene "Reprovado"
	(media>=60) ? res="Aprovado" : res="Reprovado";
	cout << "\nSituacao do aluno: " << res << endl;
	cout << "\nDeseja verificar mais situacoes?(s/n)\n";
	cin >> op;
	if(op=='s' or op=='S')
	{
		goto inicio;
	}





system("PAUSE");
return(0);	
}
