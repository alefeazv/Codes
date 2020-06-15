#include <iostream>

using namespace std;

struct Carro{
	//propriedades
	string nome;
	string cor;
	int pot;
	int velmax;
	int vel;
	//métodos:
	//ST=STRUCT
	void insere(string stnome, string stcor, int stpot, int stvelmax){
		nome=stnome;
		cor=stcor;
		pot=stpot;
		velmax=stvelmax;
		vel=0;
	}
	
	void imprime(){
			cout << "Nome: " << nome <<"\n";
			cout << "Cor: "<< cor << "\n";
			cout << "Potencia: " << pot<< "\n";
			cout << "Velocidade atual: " << vel << "\n";
			cout << "Velocidade maixma: " << velmax << "\n\n";
	}
	
	void mudavel(int mv){
		vel=mv;
		if(vel > velmax)
		{
			vel=velmax;
		}	
		else if(vel < 0)
		{
			vel=0;
		}
		else
		{
			vel=vel;
		}
	}
};

int main()
{
	Carro *carros=new Carro[5];
	Carro car1, car2, car3, car4, car5;
	
	carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;
	
	carros[0].insere("Tornado", "Vermelha", 450, 350); 
	carros[1].insere("Luxo", "Preto", 250, 260); 
	carros[2].insere("Familia", "Prata", 150, 180); 
	carros[3].insere("Trabalho", "Branco", 80, 120);  
	carros[4].insere("Padrao", "Cinza", 100, 150); 
	
	int i;
	
	for(i=0; i<5; i++)
	{
		carros[i].imprime();
	}
	
	
	
	
	
system("pause");
return(0);
}
