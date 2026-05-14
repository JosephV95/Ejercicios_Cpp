// Puntero a Estructura

#include<iostream>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
} persona1, *puntero_persona = &persona1 ; // creo una variable que usa la estructura, y puntero a la var creada

void pedirDatos();
void mostrarDatos(Persona *); // le envio un puntero tipo Persona

int main(){
	pedirDatos();
	mostrarDatos(puntero_persona);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese su nombre: ";
	// 		(atributo a guardar, cant_Caracteres, finaliza con pulsar Enter '\n' )
	cin.getline(puntero_persona->nombre, 30, '\n'); // uso el puntero a la variable para el cin, con -> selecciono el valor a guardar
	
	cout<<"Ingrese su edad: ";
	cin >>puntero_persona->edad;  // EN PUNTERO PARA ACCEDER AL CAMPO DE SU VAR ESTRUCT APUNTADA SE USA FLECHA  ->
}

void mostrarDatos(Persona *puntero_persona){
	cout<<"\nSu nombre es: "<< puntero_persona->nombre  <<endl;
	cout<<"Su edad es: "<< puntero_persona->edad <<endl;
}
