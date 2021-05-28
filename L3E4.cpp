//13. Faça um progrma que receba a idade e o peso de sete pessoas. Calcule e mostre:
// . a quantidade de pessoas com mais de 90 quilos.
// .. a media das idades das sete pessoas.
// https://edisciplinas.usp.br/pluginfile.php/4105824/mod_resource/content/0/lista_exercicios.pdf

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int x, idade, media=0, cont=0 ;
	float peso ;
	
	for (x=1 ; x<=7 ; x++)
	{
		cout <<"Qual a sua idade? ";
			cin >>idade;
		cout <<"Qual o seu peso ? ";
			cin >>peso;
		media = media + idade;
		
		if (peso > 90)
		{
			cont = cont + 1;
		}
	}
	cout <<cont<<" e a quantidade de pessoas acima de 90 kilos.\n";
	cout <<media/2<<" e a media das idades dentre as 7 pessoas.\n\n";
			
	system("pause");
	return 0;
}
