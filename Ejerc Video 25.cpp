// Hacer un programa que pida un entero calcule el valor de 1+2+3+4+5+... hasta el num ingresado

#include<iostream>
using namespace std;

int main(){
	int num, sumatoria = 0;
	
	cout << "Ingrese la cantidad de elementos: ";
	cin >> num;
	
	for( int i=1; i<=num; i++ ){
		sumatoria += i;
	}
	
	cout <<"\nLa suma total de 1 hasta "<<num <<" es de: "<<sumatoria<<endl;
	
	system("pause");
	return 0;
}
