#include <iostream>

using namespace std;

int main()
{
	int mat[3][3];
	int l, c;
	
	for(l=0; l<3; l++){
		for(c=0;c<3;c++)
		{
			cin >> mat[l][c];
		}
	}
	for(l=0; l<3; l++){
		for(c=0;c<3;c++)
		{
			cout << mat[l][c] << " ";
		}
		cout << "\n";
	}	
	
	
	
	
	
	
	
	
	
	
	
system("pause");
return(0);	
}
