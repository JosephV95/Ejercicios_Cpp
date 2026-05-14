// Convertir palabra a MAYUSCULA - funcion strupr()

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char palabra[] = "Jhon Smith";
	
	strupr(palabra);
	
	cout<< palabra <<endl;
	
	system("pause");
	return 0;
}
