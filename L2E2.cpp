//Lista 2: Exerc�cio 2
// Entre com um n�mero e imprima todos os seus divisores.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, x, div;
	
		cout <<"Entre com um n�mero: ";
			cin >>num;
		cout <<"\n\nDivisores: \n";
	
	for (x=1 ; x<=num ; x++)
	{
		if (num%x == 0)
		{
			cout <<x<<", ";
		}
	}
	system("pause");
	return 0;
}
