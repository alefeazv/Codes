#include <iostream>

using namespace std;

int main(){
	
	string veiculo="Carro";
	string *pv; // ponteiro t�m que ser do mesmo tipo que a vari�vel;
	//ponteiro armazena o endere�o da vari�vel;
	
	pv=&veiculo;
					    //ou
	cout << pv << "\n" << &veiculo << "\n";//imprime o endere�o(na mem�ria RAM) da vari�vel;
	cout << *pv << "\n";//imprime o valor normal da vari�vel;
	*pv="Moto"; //no endere�o apontado por pv, adicione o valor moto;
	cout << veiculo << "\n" << *pv;
}
