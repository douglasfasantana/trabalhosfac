// Lista 2: Exerc�cio 4
// Entre com um n�mero e imprima o fatorial desse n�mero.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, x, fat = 1;
	
	cout <<"Escreva um numero pra imprimir sua fatorial: ";
		cin >>num;
		
	for (x = num ; x > 0 ; x = x - 1)
	{
		fat = fat * x;
	}
	
	cout <<fat<<"\n";
	
	
	
	
	
	
	system("pause");
	return 0;
}
