// Hacer un programa que pida un caracter e indique en la salida si es una vocal minuscula o no

#include<iostream>
using namespace std;

int main(){
	char caracter; //LA VARIABLE DEBE SER UN CARACTER
	
	cout << "Ingrese un caracter: ";
	cin >> caracter;
	
	switch(caracter){
		// Aqui conbiene no poner el break, si ira recorriendo los distintos 'case ' hasta que se cumpla alguna
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	
			cout << "\nEl caracter SI ES una vocal minuscula";
			break;
		default:
			cout << "\nEl caracter NO ES una vocal minuscula";
			break;
	}

	return 0;
}
