// Lista 2: Exercício 8
// Imprima uma tabela para DEZ times num torneio de dois turnos.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int tur, t1, t2 = 1;
	
	for (tur=1 ; tur<=2 ; tur++)
	{
		cout <<"\n\n---------\n";
		cout <<" TURNO "<<tur<<"\n";
		cout <<"---------\n\n\n";
			
			t2 = 1;
		
		for (t2 = t2 ; t2 <= 10 ; t2++)
		{
			for (t1 = 1 ; t1 <= 10 ; t1++)
			{
				t2 = t2 + 1;
				if ( t2 > 10)
				{
					t2 = 1;
				}
				if (t1 != t2)
				{
					cout <<"Time "<<t1<<" X "<<"Time "<<t2<<"\n";
				}
			}
		}
	}
	system("pause");
	return 0;
}
