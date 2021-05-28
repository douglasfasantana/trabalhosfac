// Lista 1: Exercício 10
// A loja XXX resolveu facilitar as compras do pessoal de baixa renda e, para isso, abriu uma
// linha de crédito cujo valor máximo da prestação não poderá ultrapassar a 35% do salário bruto.
// Construa um programa em C++ que deixe entrar com o salário bruto e o valor da prestação e
// informe se o empréstimo pode ou não ser concedido.

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


