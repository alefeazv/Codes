#include <iostream>
#include <stdlib.h>  //stdlib.h ou cstdlib.h
using namespace std;

int main()
{
	int n1, n2, media;
	char op;
	inicio:
	system("cls");
	
	cout << "Digite a primeira nota:\n";
	cin >> n1;
	cout << "Digite a segunda nota:\n";
	cin >> n2;
	
	media=(n1+n2)/2;
	
	if(media>=60 and media<=100)
	{
		cout << "Aluno aprovado!\n";
    } 
	else if(media<60 and media>40)
	{
		cout << "Aluno esta na final!\n";
	}
	else
	{
		cout << "Aluno reprovado!\n";
	}
	
	cout <<"\nDigitar outras notas:(s/n)\n";
	cin >> op;
	
	if(op=='s' or op=='S')
	{
		goto inicio;
	}
	
}
