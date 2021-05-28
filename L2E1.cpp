// Lista 2: Exercício 1
// Entre com 12 números e imprima a soma de todos os números.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int x, num = 0, soma = 0;
	
	for (x=1;x<=12;x++)
	{
		cout <<"Entre com um numero: \n";
			cin >>num;
			
		soma = soma + num;
	}
	
	cout <<"A soma desses numeros da "<<soma<<"\n";	
	
	system("pause");
	return 0;
}
