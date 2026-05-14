
#include<iostream>

using namespace std;

int main(){
	
	int num1, num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout << "Ingrese un numero: ";
	cin >> num1 ;
	cout << "Ingrese otro nuero: ";
	cin >> num2 ;
	 
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout << "\nLa suma es de: " << suma << endl;
	cout << "La resta es de: " << resta << endl;
	cout << "La multiplicacion es de: " << multiplicacion << endl;
	cout << "La division es de: " << division << endl;
	
	return 0;
}
