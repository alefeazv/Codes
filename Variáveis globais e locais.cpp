#include <iostream>

using namespace std;

int n1, n2; //vari�veis globais, podem ser acessadas por outras fun��es

int main()
{
	int n3, n4; //vari�veis locais, ou seja, s� v�o ser utilizadas na fun��o main
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
