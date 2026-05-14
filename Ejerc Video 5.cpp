/* Realice un programa que lea la entrada estandar los siguientes datos:
	edad: dato tipo entero
	sexo: data tipo caracter
	altura en mts: dato de tipo decimal.
Luego mostrar por pantalla */

#include <iostream>

using namespace std;

int main (){
	int edad;
	char sexo[12]; //Ya que char solo guarda 1 caracter, con [12] le indico cuantos espacios puedo guardar
	float altura;
	
	cout << "Ingrese su edad: "; cin >> edad ;
	cout << "Ingrese su sexo: "; cin >> sexo ;
	cout << "Ingrese su altura (en mts.): "; cin >> altura ;
	
	cout << "\nEdad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Altura: " << altura << " mts." ;
	
	return 0;
}
