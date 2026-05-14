// Hacer programa que simule un cajero automatico con saldo inicial de 1000 USD

#include<iostream>
using namespace std;

int main(){
	int saldo_inicial = 1000, opcion;
	float d_ingreso, d_retiro, saldo=0 ;
	
	cout << "\tBienvenido a Cajero Virtual"<< endl ; // \t aumenta la sangria inicial del texto.
	cout << "1- Ingresar dinero en cuenta." << endl;
	cout << "2- Retirar dinero."<< endl;
	cout << "3- SALIR"<<endl;
	
	cin >> opcion;
	
	switch(opcion){
		case 1:
			cout << "Ingrese la cantidad a depositar: ";
			cin >> d_ingreso;
			saldo = saldo_inicial + d_ingreso;
			cout << "Dinero en cuenta: $" << saldo;
			break;
		case 2:
			cout << "Ingrese la cantidad a retirar: ";
			cin >> d_retiro;
			
			if ( d_retiro > saldo_inicial){
				cout << "No tiene esa cantidad en cuenta";
			} else {
				saldo = saldo_inicial - d_retiro;
				cout << "Dinero en cuenta: $"<<saldo;
			}
			break;
		case 3:
			cout << "Gracias por usar cajero virtual" << endl;
			break;
		default:
			cout << "Opcion Invalida" << endl;
			break;	
	}
	
	system("pause");  // util para los .exe ya que impide que se cierre la ventan automaticamente, al no pedir un valor por pantalla
	return 0;
}
