// Lista 1: Exerc�cio 10

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	float sal, prest; // Entrando com a vari�vel do sal�rio e da presta�ao
	
	cout <<"Bem vindo a linha de credito da Loja xXx .\nDigite Seu salario: ";
		cin >>sal;
	cout <<"Digite o valor de cada prestacao: ";
		cin >>prest;
		
	if (prest > sal * 0.35) // Se a presta��o for maior que 35% do salario, ele ir� negar o emprestimo.
	{
		cout <<"Desculpe, mas seu pedido de emprestimo foi negado.\n\n";
	}
	else // Caso contrario, ele ir� aprovar o emprestimo.
	{
		cout <<"Parabens, seu pedido de emprestimo foi autorizado !\n\n";
	}
	system ("Pause");
	
 return 0;
}


