/*Realice una funci�n que tome como par�metro un vector de n�meros enteros y
devuelve la suma de sus elementos. El resultado de la suma deber� mostrarse en
main. La carga de datos debe hacerse con otra funci�n.
Realizar con el vector como variable global y luego como local en main.*/

#include <iostream>
#define N 5
using namespace std;

void carga(int []);
int suma(int []);

int main(int argc, char *argv[])
{
	int vec[N];
	carga(vec);
	cout<<"La suma de sus componentes es : "<<suma(vec);
	return 0;
}

void carga(int v[])
{
	for(int i=0;i<N;i++)
	{
		cin>>v[i];
	}
}

int suma(int v[])
{
	int s=0;
	for(int i=0;i<N;i++)
	{
		s+=v[i];
	}
	return s;
}
