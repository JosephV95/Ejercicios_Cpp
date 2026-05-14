// Transformar una cadena a numeros entero -  Funcion  atoi()   "123" -> 123
// Transformar una cadena a numeros float -  Funcion  atof()	"123.45 -> 123.45

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char cadenaInt[] = "123";
	char cadenaFloat[] = "3.1415";
	int num_entero;
	float num_flotante;
	
	num_entero = atoi(cadenaInt);
	num_flotante = atof(cadenaFloat);
	
	cout<<"El numero entero queda: " << num_entero<<endl;
	cout<<"El numero float queda: " << num_flotante<<endl;

	system("pause");
	return 0;
}
