// Lista 1: Exercício 2 -
// Segundo uma tabela médica que deixará qualquer um frustrado, o peso ideal está relacionado
// com a altura e sexo. Construa um programa em C++ que receba a altura e o sexo de uma pessoa,
// calcule e exiba o seu peso ideal, utilizando as seguintes fórmulas:
// • homens: (72.7 * altura) – 58
// • mulheres: (62.1 * altura) – 44.7

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  char sexo; // Declarando como char pois só quero extrair a primeira letra.
  float altura, pesoid; //declarando como float, pois tanto a altura, como o peso ideal podem não ser numeros inteiros (Ex: 1.73m)
  
  cout <<"Qual o seu sexo ? (M/F)\n";
  	cin >>sexo;
  cout <<"Qual a sua altura ?\n";
  	cin >>altura;


	if (sexo == 'm' or sexo == 'M') // Importante colocar aspas simples (') por ser uma variável do tipo char e não string.
	{
		pesoid = (72.7 * altura) - 58; // A conta no caso de ser Masculino, e inserindo essa expressão matemática dentro de uma variável.
		cout <<"Seu peso ideal e: "<<pesoid<<".\n\n";
	}
	else if (sexo == 'f' or sexo == 'F')
	{
		pesoid = (62.1 * altura) - 44.7; // A conta no caso de ser Feminino, e inserindo essa expressão matemática dentro de uma variável.
		cout <<"Seu peso ideal e: "<<pesoid<<".\n\n";
	}
	else
	{
		cout <<"Voce digitou o sexo incorretamente.\n\n"; // No caso de alguem não digitar nenhum dos Sexo anteriores, assim o programa fica sem falha.
	}
	system ("Pause");
	
 return 0;
}


