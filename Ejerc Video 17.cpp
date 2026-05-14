/* Cambiar un numero entero con el mismo valor en romanos
	M = 1000
	D = 500
	C = 100
	L = 50 
	X = 10
	V = 5
	I = 1
	*/
#include<iostream>
using namespace std;

int main(){
	// creare variables que guardaran las cantidades de Unidades, Decenas, Centenas, Millar.. que hay en el numero ingresado.
	int numero, unidades, decenas, centenas, millares ;
	
	cout << "Convertidor a ROMANO \nIngrese un numero: ";
	cin >> numero;
	
	//	Para un numero de ejemplo 2152
	unidades = numero % 10 ; // El resto por 10, me dara 2. Indicando  unidades=2
	numero = numero / 10; // Luego al ser un int solo se guardara la parte ENTERA de la division por 10. numero = 215
	
	decenas = numero%10; // sobre el 215 => decenas = 5 
	numero /= 10; // numero = 21
	
	centenas = numero%10 ; // centenas = 1
	numero /= 10 ; // numero = 2
	
	millares = numero%10 ; // millar = 2
	
	
	switch (millares){
		case 1:
			cout << "M"; break;
		case 2:
			cout << "MM"; break;
		case 3:
			cout << "MMM"; break;
	}
	switch(centenas){
		case 1:
			cout << "C"; break;
		case 2:
			cout << "CC"; break;
		case 3:
			cout << "CCC"; break;
		case 4:
			cout << "CD"; break;
		case 5:
			cout << "D"; break;
		case 6:
			cout << "DC"; break;
		case 7:
			cout << "DCC"; break;
		case 8:
			cout << "DCC"; break;
		case 9:
			cout << "CM"; break;
	}
	switch(decenas){
		case 1:
			cout << "X"; break;
		case 2:
			cout << "XX"; break;
		case 3:
			cout << "XXX"; break;
		case 4:
			cout << "XL"; break;
		case 5:
			cout << "L"; break;
		case 6:
			cout << "LX"; break;
		case 7:
			cout << "LXX"; break;
		case 8:
			cout << "LXXX"; break;
		case 9:
			cout << "XC"; break;
	}
	switch(unidades){
		case 1:
			cout << "I"; break;
		case 2:
			cout << "II"; break;
		case 3:
			cout << "II"; break;
		case 4:
			cout << "IV"; break;
		case 5:
			cout << "V"; break;
		case 6:
			cout << "VI"; break;
		case 7:
			cout << "VII"; break;
		case 8:
			cout << "VII"; break;
		case 9:
			cout << "IX"; break;
	}
		
	return 0;
}
