//  sentencia do while

#include <iostream>
#include<stdlib.h>  // libreria para poder usar el system("pause")   Pero creo que no es necesario

using namespace std;

int main(){
	int i ;
	
	i = 1;
	
	do{
		cout <<	i << endl;
		i++ ;
	} while (i <= 10) ;
	
		
	system("pause");
	return 0;
}
