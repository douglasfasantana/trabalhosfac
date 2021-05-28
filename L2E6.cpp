// Lista 2: Exercício 6
// Entre com 50 números e imprima o maior e o menor entre eles.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num, x , maior = 0, menor = 0;
	
	for (x=1 ; x<=50 ; x++)
	{
		cout <<"Entre com um numero: ";
			cin >>num;
		if (num > maior and num > menor)
		{
			maior = num;
		}
		if (num < menor and num < maior)
		{
			menor = num;
		}
	}
	cout <<"O maior numero entre eles e o "<<maior<<" e o menor entre eles e o "<<menor<<".\n";
	
	system("pause");
	return 0;
}
