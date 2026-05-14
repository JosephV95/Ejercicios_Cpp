// Escribir programa que intercambie los valores de 2 variables
#include<iostream>

using namespace std;

int main(){
	
	int x, y, aux;
	
	cout << "Ingrese valor de x: "; cin >> x ;
	cout << "Ingrese valor de y: "; cin >> y ;
	
	aux = x; // auxiliar para guardar valor de x
	x = y;
	y = aux; // recupero el primer valor de x
	
	cout<< "\nEl valor de X: " << x << endl;
	cout<< "El valor de Y: " << y << endl;
	
	system("pause");
	return 0;
}
