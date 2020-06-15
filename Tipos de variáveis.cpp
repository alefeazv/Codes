#include <iostream>

using namespace std;

int main()
{
	int inteiros=0;
	char caracteres='A'; 
	double decimal=2.49999; //maior precisão que o float
	float decimal2=2.5;
	bool  verdade=true; // false=0 or true=1
	string nome="Alefe"; //vai receber um texto maior que o char
	//cout imprime valores da variável pré estabelecidos; e cin recebe valores(Printf)
	
	cout << "Digite um numero:\n";
	cin >> inteiros;
	
	cout << "\n" << inteiros << "\n" << caracteres << "\n" << decimal << "\n" << decimal2 << "\n" << verdade << "\n" << nome << "\n";
	
system("PAUSE");
return(0);
}

