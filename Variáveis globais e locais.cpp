#include <iostream>

using namespace std;

int n1, n2; //variáveis globais, podem ser acessadas por outras funções

int main()
{
	int n3, n4; //variáveis locais, ou seja, só vão ser utilizadas na função main
	int res;
	
	n1=2;
	n2=10;
	n3=5;
	n4=9;
	res=n1+n2+n3+n4;
	
	cout << "Valor de res: " << res << "\n";
	
	
	
system("PAUSE");
return(0);	
}
