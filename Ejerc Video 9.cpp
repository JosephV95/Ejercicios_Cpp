/*7.La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa 
que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>
using namespace std;

int main(){
	float n_practica, n_teoria, n_participacion, nota_final = 0;
	
	cout << "Ingrese la nota de Practica: "; cin >> n_practica;
	cout << "Ingrese la nota de Teoria: "; cin >> n_teoria;
	cout << "Ingrese la nota de Participacion: "; cin >> n_participacion;
	
	n_practica *= 0.3;  // Es igual a decir  n_practica = n_practica * 0.3
	n_teoria *= 0.6;
	n_participacion *= 0.1;
	
	nota_final = n_practica + n_teoria + n_participacion;
	
	cout << "\nLa Nota Final es: " << nota_final;
	
	return 0;
}
