#include <iostream>

using namespace std;

int main(){
	
	string veiculo="Carro";
	string *pv; // ponteiro têm que ser do mesmo tipo que a variável;
	//ponteiro armazena o endereço da variável;
	
	pv=&veiculo;
					    //ou
	cout << pv << "\n" << &veiculo << "\n";//imprime o endereço(na memória RAM) da variável;
	cout << *pv << "\n";//imprime o valor normal da variável;
	*pv="Moto"; //no endereço apontado por pv, adicione o valor moto;
	cout << veiculo << "\n" << *pv;
}
