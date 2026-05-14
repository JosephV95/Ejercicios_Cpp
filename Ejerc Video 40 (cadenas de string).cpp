// maneras para Guardar cadenas de caracteres (frases de string)
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char palabra[] = "Arthur Morgan";
	char palabra2[] = {'A','r','t','h','u','r'};
	char nombre[20];
	
	cout << "Ingrese el nombre: ";
	//cin << nombre; // con cin se guarda hasta el primer 'ESPACIO'
	//esto soluciona el problema del ESPACIO.  getline ( variable, cant. de caracteres, donde terminara el ingreso de string)
	//cin.getline( nombre, 20, '\n' );
	gets(nombre); // gets guarda toda las frase que se ingrese, pero NO RESPETA EL LIMITE impuesto al iniciar nombre[20]
	
	cout << nombre <<endl;
	
	system("pause");
	return 0;
}
