// Pedir nombre del usuario y devolver el nro de vocales que hay. USAR PUNTEROS

#include<iostream>
#include<string.h> // para la funcion strupr
using namespace std;

// Prototipo de funciones
void pedirDatos();
int contadorVocales(char *); // le paso el puntero

// variables globales
char nombreUsuario[30];

int main(){
	pedirDatos();
	cout <<"\nEl numero de vocales del nombre es: "<< contadorVocales(nombreUsuario); //es lo mismo que poner (&nombreUsuario[0])
	cout <<endl;
			
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese su nombre: ";
	cin.getline(nombreUsuario,30,'\n'); // (variable, nroCaracteres, finalizara cuando se pulse 'enter' ('\n') )
	
	strupr(nombreUsuario); // Convertimos a mayuscula para evitar errores
}

int contadorVocales(char *nombre){
	int contador = 0;
	
	while( *nombre ){ //se repetira mientras la posicion en 'nombre' NO SEA NULO  '\0' <== simbolo de null
		switch(*nombre){
			case 'A':
			case 'E':	
			case 'I':
			case 'O':
			case 'U': contador++ ;
		}
		
		nombre++ ; // aumento la posicion del puntero para acceder al valor del siguiente elemento 
	}
	
	return contador;
}
