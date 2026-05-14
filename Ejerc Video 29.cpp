// Hacer programa que pida un entero entre 1-100. El programa debe elegir un aleatorio entre 1-100 e indicar
// si el num ingresado el mayor o menor al al aleatorio, asi hasta que adivine. Por ultimo mostrar la cantidad de 
// intentos que le llevo.  
// variable = limite_inf + rand() % (limite_sup + 1 - limite_inf)

#include<iostream>
#include<stdlib.h>  // libreria para generar el numero aletorio
#include<time.h>	// tambien se usa para generar el numero aleatorio

using namespace std;

int main(){
	int numero, num_aleatorio, contador=0;
	
	srand(time(NULL)); // generar un numero aleatorio
	
	// variable = limite_inf + rand() % (limite_sup + 1 - limite_inf)
	num_aleatorio = 1 + rand() % (100); //  100+1 = 101 -> 101-1 = 100
	
	do{
		cout << "Ingrese un numero: ";
		cin >> numero;
		
		if (numero > num_aleatorio){
			cout <<"\nDebe ingresar un numero menor\n";
		}
		if (numero < num_aleatorio){
			cout <<"\nDebe ingresar un numero mayor\n";
		}
		contador ++;
	} while ( numero != num_aleatorio ); //Se repetira mientras no coincidan los numeros
	
	cout << "\nHAZ ADIVINADO!!! con "<< contador << " intentos."<<endl;
	
	
	system("pause");
	return 0;
}
