// Lista 2 : Exercício 3
// Entre com um número e imprima se o número é, ou não, primo.

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
