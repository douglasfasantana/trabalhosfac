// Lista 2 : Exerc�cio 3
// Entre com um n�mero e imprima se o n�mero �, ou n�o, primo.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, cont = 0, x;
	
		cout <<"Entre com um numero: ";
			cin >>num;
	
	for (x=1 ; x<=num ; x++)
	{
		if (num%x == 0)
		{
			cont = cont + 1;
		}
	}
	
	if (cont == 2)
	{
		cout <<"Esse numero e primo !\n";
	}
	else
	{
		cout <<"Esse numero nao e primo !\n";
	}
	
	system("pause");
	return 0;
}
