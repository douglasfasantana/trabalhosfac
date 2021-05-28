// Lista 1: Exercício 7

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int idade;
	float altura; // Declarando a altura como float, pois quase sempre a altura é um numero quebrado (Ex: 1.73m)
	
	cout <<"Bem vindo ao recrutamento para o time de Voleibol.\n Por favor, diga a sua idade: ";
		cin >>idade;
	cout <<"Agora diga a sua altura: ";
		cin >>altura;
		
	if (idade < 15 and altura > 1.75) // Colocando os requisitos que o treinador quer para entrar no time.
	{
		cout <<"Voce esta selecionado para entrar no time !\n\n";
	}
	else // Estando fora dos requisitos, a pessoa nao é chamada.
	{
		cout <<"Infelizmente voce nao atende aos nossos requisitos.\n\n";
	}
	system ("Pause");
	
 return 0;
}


