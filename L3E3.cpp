//1. Faça um programa que verifique o mostre os números entre 1000 e 2000 que, quando divididos por 11, produzam resto igual a 5.
// https://edisciplinas.usp.br/pluginfile.php/4105824/mod_resource/content/0/lista_exercicios.pdf

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int x;
	
	for (x= 1000 ; x<= 2000 ; x++)
	{
		if (x%11==5)
		{
			cout <<x<<"\t";
		}
	}
	cout <<"\n\n";
			
	system("pause");
	return 0;
}
