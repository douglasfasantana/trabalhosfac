// Lista 1: Exerc�cio 2

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  char sexo; // Declarando como char pois s� quero extrair a primeira letra.
  float altura, pesoid; //declarando como float, pois tanto a altura, como o peso ideal podem n�o ser numeros inteiros (Ex: 1.73m)
  
  cout <<"Qual o seu sexo ? (M/F)\n";
  	cin >>sexo;
  cout <<"Qual a sua altura ?\n";
  	cin >>altura;


	if (sexo == 'm' or sexo == 'M') // Importante colocar aspas simples (') por ser uma vari�vel do tipo char e n�o string.
	{
		pesoid = (72.7 * altura) - 58; // A conta no caso de ser Masculino, e inserindo essa express�o matem�tica dentro de uma vari�vel.
		cout <<"Seu peso ideal e: "<<pesoid<<".\n\n";
	}
	else if (sexo == 'f' or sexo == 'F')
	{
		pesoid = (62.1 * altura) - 44.7; // A conta no caso de ser Feminino, e inserindo essa express�o matem�tica dentro de uma vari�vel.
		cout <<"Seu peso ideal e: "<<pesoid<<".\n\n";
	}
	else
	{
		cout <<"Voce digitou o sexo incorretamente.\n\n"; // No caso de alguem n�o digitar nenhum dos Sexo anteriores, assim o programa fica sem falha.
	}
	system ("Pause");
	
 return 0;
}


