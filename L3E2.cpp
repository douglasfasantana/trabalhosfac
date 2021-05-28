// 3. Faça um programa que receba dois números inteiros, digitados pelo usuário e mostre o maior e o menor número digitado.
// http://subsequenteirece.blogspot.com/2011/12/exercicios-estrutura-de-selecao-if-if.html

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int n1, n2;
	
	cout <<"Informe um numero: ";
		cin >>n1;
	cout <<"Informe outro numero: ";
		cin >>n2;
	if (n1 > n2)
	{
		cout <<n1<<" e o maior numero e "<<n2<<" e o menor numero.\n\n";
	}
	else if (n2 > n1)
	{
		cout <<n2<<" e o maior numero e "<<n1<<" e o menor numero.\n\n";
	}
	else
	{
		cout <<"Os dois numeros sao iguais.\n\n";
	}
			
	system("pause");
	return 0;
}

