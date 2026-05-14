// Ordenamiento con Metodo Burbuja

#include<iostream>
using namespace std;

int main(){
	int arreglo[] = {5,7,2,9,1,3,8,4,10,6};
	int aux;
	
	// Para Ordenamiento Burbuja se necesita 2 for para que haga las multiples pasadas y comparaciones
	for (int i=0; i<10; i++){
		for(int j=0; j<9; j++){
			if(arreglo[j] > arreglo[j+1]){
			aux = arreglo[j];
			arreglo[j] = arreglo[j+1];
			arreglo[j+1] = aux;
			}
		}
	}
	
	cout<<"Ordenado de forma Ascendente: "<<endl;
	for(int i=0; i<10; i++){
		cout<<arreglo[i]<<" ";
	}
	
	cout<<"\nOrdenado de forma Descendente: "<<endl;
	for(int i=9; i>=0; i--){
		cout<<arreglo[i]<<" ";
	}
	
	system("pause");
	return 0;
}


