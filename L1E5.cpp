// Lista 1: Exercício 5

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int num;
	
	 cout <<"Entre com um numero: ";
	 	cin >>num;
	 	
	if (num == 5) //Se o numero for igual a 5.
	{
		cout <<"Seu numero e o 5.\n\n";
	}
	else if (num == 200) // Se o numero for igual a 200.
	{
		cout <<"Seu numero e o 200.\n\n";
	}
	else if (num == 400) // Se o numero for igual a 400.
	{
		cout <<"Seu numero e o 400.\n\n";
	}
	else if (num >= 500 and num <= 1000) // Se o numero estiver entre 500 e 1000.
	{
		cout <<"Seu numero esta entre 500 e 1000.\n\n";
	}
	else // E no caso de não ser nenhum acima.
	{
		cout <<"Seu numero nao e o 5, nem o 200, nem o 400, e nao esta entre 500 e 1000.\n\n";
	}
	system ("Pause");
	
 return 0;
}


