// Lista 1: Exerc�cio 4

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int idade; //Declarando como int pois ngm tem 18,8 de idade kkk
	
	cout <<"Bem Vindo ao sitema de Classe Eleitoral.\nPor favor, digite sua idade: ";
		cin >>idade;
	
	if ((idade >= 16 and idade <= 18) or idade > 70) // Eleitores entre 16 e 18 anos e acima de 70 anos n�o tem voto obrigat�rio, usei um parentese extra pra separar as duas opera��es (o AND e o OR)
	{
		cout <<"Voce e um eleitor facultativo !\n\n";
	}
	else if (idade >= 18 and idade <= 70) // Eleitores entre 18 e 70 anos tem seu voto obrigat�rio.
	{
		cout <<"Voce e um eleitor obrigatorio !\n\n";
	}
	else // N�o estando dentre os dois acima, o eleitor tera menos que 16 anos, ou seja, ainda nao � um eleitor.
	{
		cout <<"Voce ainda nao e um eleitor !\n\n";
	}
	system ("Pause");
	
 return 0;
}


