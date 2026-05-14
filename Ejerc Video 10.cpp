/*9. Realice un programa que calcule el valor que toma la siguiente función para 
unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x, y, resultado = 0;
	
	cout << "Ingrese valor de X: ";
	cin >> x;
	cout << "Ingrese valor de Y: ";
	cin >> y;
	
	// sqrt  sirve para sacar raiz cuadrada, es una funcion de la libreria math.h
	resultado = (sqrt(x)) / (pow( y, 2) - 1);  // funcion  pow  es para elevar una variable. pow( variable, num_a_elevarlo )
	
	cout << "\nEl resultado es: " << resultado <<endl;
	
	
	return 0;
}
