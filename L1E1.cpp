// Lista 1: Exerc�cio 1

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  int num, uni, dez, cent, inver; // Vari�veis
  num = 745; // declarando o n�mero 745 
  
  // Separando os n�meros e j� invertendo
  uni = num /100; // nessa conta estarei pegando o numero que esta na centena, para tornar ele em unidade ( Ex: 100 / 100 = 1)
  dez = num /10 % 10; // Pegando o numero que est� na dezena e tornando ele uma unidade(1 numero s�). (Ex 123 / 10 = 12,3 % 10 = 2)
  cent = num % 10; // Pegando o numero que est� na unidade e tornando ele uma unidade tbm. (Ex: 123 % 10 = 3)
  inver = cent * 100 + dez * 10 + uni * 1; //juntando os numeros j� invertidos e colocando dentro de uma variavel
  // cent = antiga unidade // dez = antiga dezena // uni = antiga centena
  
  cout <<"O numero invertido e "<<inver<<".\n\n";
  system ("Pause");
 
 return 0;
}





