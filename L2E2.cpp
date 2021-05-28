//Lista 2: Exercício 2
// Entre com um número e imprima todos os seus divisores.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, x, div;
	
		cout <<"Entre com um número: ";
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
