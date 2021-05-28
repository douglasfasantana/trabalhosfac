// Lista 1: Exercício 4
// Construa um programa em C++ que leia a idade de uma pessoa e informe a sua classe eleitoral.
// Pesquise na no site do TER caso você não tenha certeza:
// • não eleitor .
// • eleitor obrigatório .
// • eleitor facultativo.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int idade; //Declarando como int pois ngm tem 18,8 de idade kkk
	
	cout <<"Bem Vindo ao sitema de Classe Eleitoral.\nPor favor, digite sua idade: ";
		cin >>idade;
	
	if ((idade >= 16 and idade <= 18) or idade > 70) // Eleitores entre 16 e 18 anos e acima de 70 anos não tem voto obrigatório, usei um parentese extra pra separar as duas operações (o AND e o OR)
	{
		cout <<"Voce e um eleitor facultativo !\n\n";
	}
	else if (idade >= 18 and idade <= 70) // Eleitores entre 18 e 70 anos tem seu voto obrigatório.
	{
		cout <<"Voce e um eleitor obrigatorio !\n\n";
	}
	else // Não estando dentre os dois acima, o eleitor tera menos que 16 anos, ou seja, ainda nao é um eleitor.
	{
		cout <<"Voce ainda nao e um eleitor !\n\n";
	}
	system ("Pause");
	
 return 0;
}


