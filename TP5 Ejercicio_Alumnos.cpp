// Ejercicio de Estructura - 
#include<iostream>

using namespace std;

struct Alumno {
	char nombre[20];
	int edad;
	float promedio;
} alumnos[3]; // tambien podria se alu1, alu2, alu3

int main(){ 
	float prom_mayor = 0;
	int indice_mayor = 0;
	
	for(int i=0; i<3; i++){
		cout << "Ingrese el Nombre de alumno "<<i<<": ";
		fflush(stdin); // sirve para limpiar el cin del getline para las siguientes iteraciones, y que no de errrores
		cin.getline(alumnos[i].nombre,20,'\n');
		cout << "Ingrese edad de alumno "<<i<<": ";
		cin >> alumnos[i].edad;
		cout << "Ingrese promedio de alumno "<<i<<": ";
		cin >> alumnos[i].promedio;
		
		if (alumnos[i].promedio > prom_mayor){
			prom_mayor = alumnos[i].promedio;
			indice_mayor = i;
		}
	}

	cout << "\nEl mejor promedio es de: " << alumnos[indice_mayor].nombre << " con "<< alumnos[indice_mayor].promedio << endl;
	
	system("pause");
	return 0;
}

