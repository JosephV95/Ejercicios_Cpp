// longitud de una cadena de string  -  funcion  strlen()

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char palabra[] = "hola carola";
	int longitud = 0;
	
	longitud = strlen(palabra);
	
	cout<< "numero de caracteres: "<<longitud<<endl;
	
	system("pause");
	return 0;
}
