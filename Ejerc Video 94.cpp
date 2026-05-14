// hacer una estructura de alumno, comprobar cual de los 3 tiene mejor promedio  y luego mostrar los datos del alumno. USAR PUNTERO A ESTRUCTURA

#include<iostream>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
} alumnos[3], *puntero_alumnos = alumnos; // Es igual a poner *puntero_alumnos= &alumnos[0]
// Se creo el array y el puntero con valor inicial a la 1ra posicion del array

//Prototipo de funciones
void pedirDatos();
void calcularMejorPromedio(Alumno *); // se enviara el puntero tipo Alumno

int main(){
	pedirDatos();
	calcularMejorPromedio(puntero_alumnos);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	for(int i=0; i<3; i++){
		fflush(stdin); // libera memoria del buffer para seguir ingresando datos y que no de error al ingresar mas datos
		
		cout<< "Ingrese nombre Alumno "<<i<<": ";
		cin.getline( (puntero_alumnos+i)->nombre, 30, '\n'); // ese igual a puntero_alumnos[i].nombre
		cout<<"Ingrese la edad: ";
		cin>> (puntero_alumnos+i)->edad;
		cout<<"Ingrese su promedio: ";
		cin>> (puntero_alumnos+i)->promedio;
		cout<<endl;
	}
}

void calcularMejorPromedio(Alumno *puntero_alumnos){
	float mayor = 0.0;
	int indice = 0;
	
	for(int i=0; i<3; i++){
		// comprobar el mayor promedio
		if( (puntero_alumnos+i)->promedio > mayor){ // es igual a puntero_alumnos[i].promedio
			mayor = (puntero_alumnos+i)->promedio;
			indice = i;
		}
	}
	
	// Mostrar los datos del alumno con mejor promedio
	cout<<"\nEl alumno con mejor promedio es:"<< endl;
	cout<<"Nombre: "<< (puntero_alumnos+indice)->nombre <<endl;
	cout<<"Edad: "<< (puntero_alumnos+indice)->edad <<endl;
	cout<<"Promedio: "<< (puntero_alumnos+indice)->promedio <<endl;
}
