#include <iostream>
using namespace std;
struct Persona {
	char nombre[30];
	int edad;
};
// prototipo de la funci�n para el ingreso de datos
void pedirdatos(Persona &);
// prototipo de la funci�n para pasar la estructura
void mostrardatos(Persona);
int main() {
	struct Persona p1;
	// Llamada a la funci�n para el ingreso de datos en la estructura
	pedirdatos(p1);
	// llamada a la funci�n para mostrar los datos de la estructura
	mostrardatos(p1);
	return 0;}
// definici�n de la funci�n pedirdatos
void pedirdatos(Persona &p1){
	cout << "Ingrese nombre: ";
	cin.getline(p1.nombre,30,'\n');
	cout << "Ingrese edad: ";
	cin >> p1.edad;}
	// definici�n de la funci�n mostrardatos
	void mostrardatos(Persona p){
		cout << "\n\nNombre: " << p.nombre<<endl;
		cout << "Edad: " << p.edad << endl;}
