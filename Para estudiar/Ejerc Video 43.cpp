// comparar cadenas - funcion strcmp()

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char palabra_1[] = "becerro";
	char palabra_2[] = "Avion";
	
	// strcmp( variable1, variable2 ) retorna un 0 si SON IGUALES, 1 si son DISTINTOS
	if(strcmp(palabra_1, palabra_2) == 0 ){
		cout<<"Las palabras son IGUALES"<<endl;
	}
	
	// esto devuelve un 1 indicando que var1 es mayor que var2  de lo contrario retornaria -1
	if(strcmp( palabra_1, palabra_2) > 0){ 
		cout << palabra_1<<" esta despues alfabeticamente"<<endl;
	} else{
		cout << palabra_2<<" esta despues alfabeticamente"<<endl;
	}
	
	cout<<strcmp( palabra_1, palabra_2)<<endl;
	
	system("pause");
	return 0;
}

