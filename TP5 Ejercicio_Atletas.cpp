// Ejercicio de Estructura - 
#include<iostream>
using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int nro_medallas;
};

int main(){
	int cantidad;
	int mayor_medallas = 0;
	int indice = 0;
	
	cout<< "Ingrese la cantidad de Atletas: ";
	cin >> cantidad;
	
	Atleta* arr_atletas = new Atleta[cantidad];
	
	for(int i=0; i< cantidad; i++){
		cout<< "Nombre Atleta "<<i <<": ";
		cin >> arr_atletas[i].nombre;		
		cout<< "Pais Atleta "<<i <<": ";
		cin >> arr_atletas[i].pais;
		cout<< "Nro Medallas Atleta "<<i <<": ";
		cin >> arr_atletas[i].nro_medallas;
		cout<< endl;
		
		if( arr_atletas[i].nro_medallas > mayor_medallas ){
			mayor_medallas = arr_atletas[i].nro_medallas;
			indice = i;
		}
	}
	
	cout << "\nEl atleta con mas medallas es "<< arr_atletas[indice].nombre <<" de "<<arr_atletas[indice].pais<< " con "<< arr_atletas[indice].nro_medallas <<" medallas"<<endl;
	
	
	system("pause");
	return 0;
}
