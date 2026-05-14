// copiar contenido	de una cadena a otra  - funcion  strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nombre[] = "Natalia";
	char nombre_2[20];
	
	strcpy(nombre_2, nombre); // strcpy ( variableVacia, variable a copiar )
	
	cout<< nombre_2<<endl;
	
	system("pause");
	return 0;
}
