// Lista 1: Exercício 1

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  int num, uni, dez, cent, inver; // Variáveis
  num = 745; // declarando o número 745 
  
  // Separando os números e já invertendo
  uni = num /100; // nessa conta estarei pegando o numero que esta na centena, para tornar ele em unidade ( Ex: 100 / 100 = 1)
  dez = num /10 % 10; // Pegando o numero que está na dezena e tornando ele uma unidade(1 numero só). (Ex 123 / 10 = 12,3 % 10 = 2)
  cent = num % 10; // Pegando o numero que está na unidade e tornando ele uma unidade tbm. (Ex: 123 % 10 = 3)
  inver = cent * 100 + dez * 10 + uni * 1; //juntando os numeros já invertidos e colocando dentro de uma variavel
  // cent = antiga unidade // dez = antiga dezena // uni = antiga centena
  
  cout <<"O numero invertido e "<<inver<<".\n\n";
  system ("Pause");
 
 return 0;
}





