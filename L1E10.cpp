// Lista 1: Exercício 10

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	float sal, prest; // Entrando com a variável do salário e da prestaçao
	
	cout <<"Bem vindo a linha de credito da Loja xXx .\nDigite Seu salario: ";
		cin >>sal;
	cout <<"Digite o valor de cada prestacao: ";
		cin >>prest;
		
	if (prest > sal * 0.35) // Se a prestação for maior que 35% do salario, ele irá negar o emprestimo.
	{
		cout <<"Desculpe, mas seu pedido de emprestimo foi negado.\n\n";
	}
	else // Caso contrario, ele irá aprovar o emprestimo.
	{
		cout <<"Parabens, seu pedido de emprestimo foi autorizado !\n\n";
	}
	system ("Pause");
	
 return 0;
}


