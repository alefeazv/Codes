#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	
	n1=20;
	
	 //n1=n1+1 � igual a n1+=1 � igual a n1++
	 //n1=n1-1 � igual a n1-=1 � igual a n1--
	 //n1=n1*x � igual a n1*=x 
	 //n1=n1/1 � igual a n1/=x
	 //n1++ != ++n1
	 //cout com n1++ ele n�o vai adicionar 1, s� adcionar� se eu usar ++n1, fora do cout, ou seja, em declara��es de vari�vel
	 //se eu usar n1++, ele adciona 1, e se eu adcionar ++n1, ele adciona 2, isso serve para o --
	
	cout << ++n1 << "\n";
	n1++;
	cout << n1 << "\n";	
	++n1;
	cout << n1 << "\n";
	
	
system("PAUSE");
return(0);
}
