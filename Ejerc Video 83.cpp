
#include<iostream>
using namespace std;

int main(){
	int numero, *dir_numero;
	
	cout<<"Ingrese un numero: ";
	cin>> numero;
	
	dir_numero = & numero; // se guarda la posicion de memoria
	
	if( *dir_numero % 2 == 0){ // con el * indicamos al puntero que nos devuelva el valor guardado en la posicion
		cout<< "El numero "<< *dir_numero<< " es par" <<endl; //mostramos el valor
		cout<< "Posicion: "<< dir_numero <<endl; // mostramos la posicion
	} else {
		cout<< "El numero "<< *disr_numero<< " es impar" <<endl;
		cout<< "Posicion: "<< dir_numero <<endl;
	}
	
	system("pause");
	return 0;k
}
