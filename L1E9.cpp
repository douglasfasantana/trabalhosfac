// Lista 1: Exercício 9
// Construa um programa que exiba a área e o perímetro de um retângulo que tem seus lados
// informados pelo usuário.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	float l, h, area, peri; // Sendo um retangulo tendo 2 lados iguais. voce só precisará de sua altura e largura. As outras variaveis são para extrair a area e o perimetro do retangulo.
	
	cout <<"Vamos construir um retangulo.\nDigite a largura: ";
		cin >>l;
	cout <<"Digite a altura: ";
		cin >>h;
	area = l*h; // Fazendo a expressão matemática: Área = Largura * Altura
	peri = l*2 + h*2; // Fazendo a expressão matemática: Perimetro = Largura * 2 + Altura * 2 (Largura 1 + Largura 2 + Altura 1 + Altura 2).
	
	cout <<"\nA area do seu retangulo e: "<<area<<".\nO perimetro do seu retangulo e :"<<peri<<".\n\n";
	system ("Pause");
	
 return 0;
}


