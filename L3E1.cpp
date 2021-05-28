//Lista 3: Exercício 1
// Fazer um programa para ler o nome, 2 notas, mostrar a média com a mensagem:
// Inferior a 5,0 – “Reprovado”
// De 5,1 a 6,9 – “Recuperação”
// De 7,0 a 10 – “Aprovado”
// Obs: mostrar o nome.
// http://subsequenteirece.blogspot.com/2011/12/exercicios-estrutura-de-selecao-if-if.html

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	string nome;
	float n1, n2,med;
	
	cout <<"Informe o nome do aluno: ";
		cin >>nome;
	cout <<"A primeira nota: ";
		cin >>n1;
	cout <<"A segunda nota: ";
		cin >>n2;
	med = (n1+n2)/2;
	
	if (med <= 5) // coloquei menor ou igual pro programa não entrar em limbo, caso a media for 5.
	{
		cout <<"O Aluno(a) "<<nome<<" esta REPROVADO !\n\n";		
	}
	else if (med > 5 and med < 7)
	{
		cout <<"O Aluno(a) "<<nome<<" esta de RECUPERACAO !\n\n";
	}
	else if (med >= 7 and med <= 10)
	{
		cout <<"O Aluno(a) "<<nome<<" esta APROVADO !\n\n";
	}
	
	system("pause");
	return 0;
}
