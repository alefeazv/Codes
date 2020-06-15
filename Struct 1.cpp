#include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velmax;
};

int main()
{
	Carro car1;
	Carro car2;
	
	car1.nome="Tornado";
	car1.cor="Preta";
	car1.pot=200;
	car1.velmax=350;
	
	car2.nome="Siena";
	car2.cor="Prata";
	car2.pot=300;
	car2.velmax=200;
	
	cout << "Nome: " << car1.nome <<"\n";
	cout << "Cor: "<< car1.cor << "\n";
	cout << "Potencia: " << car1.pot<< "\n";
	cout << "Velocidade maixma: " << car1.velmax << "\n";
	
	cout << "Nome: " << car2.nome <<"\n";
	cout << "Cor: "<< car2.cor << "\n";
	cout << "Potencia: " << car2.pot<< "\n";
	cout << "Velocidade maixma: " << car2.velmax << "\n";
	
	
	
	
	
	
system("pause");
return(0);
}
