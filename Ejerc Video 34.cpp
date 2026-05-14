// hacer un programa que combine 2 arreglos de caracteres en un tercero arreglo
#include<iostream>
using namespace std;

int main(){
	char arreglo_1[] = {'a','b','c','d','e'};
	char arreglo_2[] = {'f','g','h','i','j'};
	char arreglo_final[10];
	
	// Recorrido el arreglo 1 
	for(int i=0; i<5; i++){
		arreglo_final[i] = arreglo_1[i];
	}
	// Recorrido el arreglo 2 
	for(int i=5; i<10; i++){  // Debera a comenzar por el indice 5
		arreglo_final[i] = arreglo_2[ i-5 ];  //con i-5 vuelve a 0 y y puede acceder al 1er elem del arreglo 2
	}
	
	// recorrido del arreglo final
	for (int i=0; i<10; i++){
		cout<< arreglo_final[i] <<endl;
	}
	system("pause");
	return 0;
}
