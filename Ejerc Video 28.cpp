// Hacer un programa que realice la seri fibonacci ->  1 1 2 3 5 8 13 ...n    (los numero se van sumando con el anterior

#include<iostream>
using namespace std;

int main(){
	int cant_elem, x=0, y=1, z=0;
	
	cout<<"Ingrese la cantidad de elementos: ";
	cin >> cant_elem;
	
	cout<< "1 ";  // Para mostrar el primer 1 y ya luego solo mostrar los demas elementos;
	for(int i=1; i < cant_elem; i++){
		z = x + y;
		cout << z<< " ";
		
		x = y;
		y = z;
	}
	cout<<"\n";
	
	
	system("pause");
	return 0;
}
