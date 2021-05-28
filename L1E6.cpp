// Lista 1: Exercício 6
// Construa um programa em C++ que receba um número via teclado. Se o número for negativo,
// eleve o número ao quadrado e exiba, caso contrário, extraia a raiz quadrada dele e exiba.

#include <iostream>
#include <cstdlib>
#include <math.h> // Usando a biblioteca de matemática.
using namespace std;

int main ()
{
	float num;
 	num = 0; // Por se tratar de uma conta de matematica comum, eu declarei a variavel como 0 pra nao ter erro na hora da conta.
 
 	cout <<"Digite um numero: ";
 		cin >>num;

	if (num < 0) // Caso o numero seja menor que 0 , ele será elevado ao quadrado, ou seja, ele * ele mesmo.
	{
		cout <<num*num<<"\n\n";
	}
	else // Eu tentei de todas as formas criar um modo de fazer raiz quadrada sem usar raiz quadrada, pq ela ainda nao ensinou esse comendo, mas infelizmente, tive que usar raiz quadrada OBVIAMENTE.
	{
		num = sqrt(num);  // vale atentar que a raiz quadrada só vai ser considerar se voce colocar ela como "recebimento", ou seja, só o sqrt(num); nao funciona, tem que fazer x = sqrt(num);
		cout <<num<<"\n\n";
	}
system ("Pause");

 return 0;
}


