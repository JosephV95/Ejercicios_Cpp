
// Punteros

#include<iostream>
using namespace std;

int suma(int*, int*);

int main(){
	int *ptrx;
	int *ptrz;
	int x = 10; // Declaramos una variable entera
	int z = 56; 
	
	ptrx = &x; // Declaramos un puntero a un entero
	ptrz = &z;
	
	cout << "Valor de x: "<< x <<endl;
	cout << "---\nDireccion de x: "<< &x << endl; // con un & se asigna una memoria y se puede transportar
	cout << "---\nValor almacenado en ptrx: "<< *ptrx <<endl;
	cout << "---\nValor al que apunta ptrx: "<< ptrx <<endl;
	
	*ptrx = 20; // modificamos el valor de x atraves de los punteros
	*ptrz = 14;
	
	int resultado = suma(&x, &z);
	
	cout << "\nNuevo valor de x: "<< x <<endl;
	cout << "Nuevo valor de la suma: "<< resultado <<endl;
	
	system("pause");
	return 0;
}

int suma(int *a, int *b){
	*a = *a + 10; // 30 --se modifica el valor al que apunta a
	*b = *b + 20; // 34 --se modifica el valor al que apunta b
	
	return *a + *b; // Suma los valores a los que apunta a y b
}
