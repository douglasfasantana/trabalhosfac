// Lista 1: Exerc�cio 3

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
 	int a, b, c, d; // Declarando uma variavel para cada numero , e uma variavel extra para fazer a troca de numeros.
 	
 	cout <<"Escreva um numero: ";
 		cin >>a;
 	cout <<"Mais um numero: ";
 		cin >>b;
 	cout <<"Mais um numero: ";
 		cin >>c; 		
		
 	if ( a > b) // para fazer a troca h� 3 probabiladades: Primeiro saber se A � maior que B, pois assim o menor numero entre eles fica com o A .
 	{
 		d = a;
 		a = b;
 		b = d;
	}
 	if (a > c) // Segundo saber se A � maior que C, pois assim o menor numero entre os dois ficar� no A e ele se tornar� o menor numero entre os 3.
 	{
	 	d = a;
	 	a = c;
	 	c = d;
    }
   if (b > c) // E por ultimo, saber se B � maior que C pois assim o maior numero ficar� com o C e o B se tornar� o numero do meio.
	{
		d = b;
		b = c;
		c = d;
	}
	
	cout <<c<<" "<<b<<" "<<a<<"\n\n";	// Mostrando os numeros de forma decrescente.
	system ("Pause");
	
	return 0;
}


