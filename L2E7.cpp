// Lista 2: Exercício 7
// Imprima todas as tabuadas de multiplicar de 1 até 10.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int x, y;
	
	for (x=1 ; x<=10 ; x++)
	{
		cout <<"--------------\n";
		cout <<" TABUADA DO "<<x<<"\n";
		cout <<"--------------\n";
			for (y=1 ; y<=10 ; y++)
			{
				cout <<x<<"x"<<y<<" = "<<x*y<<"\n";
			}
		cout <<"\n\n";
	}
	
	
	
	
	
	system("pause");
	return 0;
}
