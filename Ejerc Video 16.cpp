//Hacer un programa que pida una edad e indique si la edad esta en rango (18-25)

#include<iostream>
using namespace std;

int main(){
	int edad;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if ( (edad >= 18) && (edad <= 25) ){
		cout << "\nSu edad " << edad << " esta en el rango de 18-25";
		cout << f:'Su edad ${edad}'
	} else {
		cout << "\nSu edad "<<edad<< " no es en el rango 18-25";
	}
	
	return 0;
}
