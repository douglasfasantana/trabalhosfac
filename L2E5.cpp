// Lista 2: Exercício 5
// Entre com 20 números e imprima a soma dos positivos e o total de números negativos.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, x, cont = 0, soma = 0;
		
	for (x = 1 ; x <= 20 ; x++)
	{
		cout <<"Entre com um numero: ";
			cin >>num;
		
		if (num >= 0)
		{
			soma = soma + num;
		}
		else
		{
			cont = cont + 1;
		}	
	}
	cout <<"A soma dos numeros positivos e "<<soma<<" e o total de numeros negativos digitados sao "<<cont<<".\n";
	
	
	
	
	
	
	system("pause");
	return 0;
}
