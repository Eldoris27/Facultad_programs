/*Escribir una funci�n que calcule el promedio de dos n�meros. Los valores a promediar se
ingresar�n en la funci�n y el valor del promedio calculado deber� mostrarse en main.*/

#include <iostream>
using namespace std;

float promedio();

int main(int argc, char *argv[]) {
	cout<<promedio();
	
	return 0;
}

float promedio () {
	float a, b;
	cout<<"Ingresar los dos numeros a promediar:"<<endl;
	cin>>a;
	cin>>b;
	return ((a+b)/2);
}
