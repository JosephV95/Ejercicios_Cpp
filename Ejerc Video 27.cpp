//hacer programa que calcule el valor de 2^1+2^2+2^3+2^4+...+2^n   donde n lo ingresara el usuario

#include <iostream>
#include<math.h> // LIBRERIA PARA USAR LA FUNCION DE ELEVACION pow( num, cantidad a elevar )
using namespace std;

int main(){
	int sumatoria = 0, num_elevado=0, cantidad;
	
	cout <<"Ingrese la cantidad de elementos a sumar: ";
	cin >> cantidad;
	
	for( int i=1; i<=cantidad; i++){
		num_elevado = pow( 2, i);  // la funcion pow sirve para los numeros elevados
		sumatoria += num_elevado;
		
		cout << "2 ^ "<<i<<" = "<<num_elevado<<endl;
	}
	
	cout<<"\nLa suma total de los elevados de 2 es: "<<sumatoria<<endl;
	
	
	system("pause");
	return 0;
}
