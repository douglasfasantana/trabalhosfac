// Lista 1: Exerc�cio 8

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int a, b, c;
	
	cout <<"Vamos formar um triangulo.\nDigite o lado A: ";
		cin >>a;
	cout <<"Digite o lado B: ";
		cin >>b;
	cout <<"Digite o lado C: ";
		cin >>c;
	
	if (a < b + c and b < a + c and c < a + b) // Para se formar um triangulo, nenhum lado deve ser maior que a soma dos outros 2.
	{
		cout <<"Parabens ! Voce formou um triangulo com sucesso !\n\n";
	}
	else // Colocando um lado maior que a soma dos outros 2.
	{
		cout <<"Infelizmente nao tem como criar um triangulo com esses parametros.\n\n";
	}
	system ("Pause");
	
 return 0;
}


