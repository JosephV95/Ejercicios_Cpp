
#include<iostream>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	int dni;
};

struct Nodo {
	Alumno alum;
	Nodo *siguiente;
};

// PROTOTIPO DE FUNCIONES
void menu();
void cargarAlumno(Alumno &);
void agregarEnPila(Nodo *&, Alumno &);
void eliminarEnPila(Nodo *&, Alumno);

int main(){
	
	menu();
	
	system("pause");
	return 0;
}

void menu(){
	int opcion;
	int pila_elegida;
	Alumno alum;
	
	Nodo *pila_1;
	Nodo *pila_2;
	
	do{
		cout<<"\t .:MENU:."<<endl
		<<"1. Agregar Alumno a Pila "<<endl
		<<"2. Mostrar una Pila "<<endl
		<<"3. Obtener Alumno mas Grande y mas Chico "<<endl
		<<"4. Mostrar cantidad de Alumnos en una Pila "<<endl
		<<"5. SALIR" <<endl;
		//cin>> opcion; cout<<endl;
		if (!(cin >> opcion)) { // Si la lectura falla (el usuario metió una letra)
		    cin.clear(); // Limpia el estado de error de cin
		    cin.ignore(10000, '\n'); // Ignora hasta 10000 caracteres o hasta el siguiente salto de línea
		    opcion = 0; // Asignamos un valor que dispare el "default" del switch
		}
		
		while(opcion){
			case 1: 
				cout<<"Seleccione pila 1 o 2: ";  cin>>pila_elegida;
				if(pila_elegida==1){
					cargarAlumno(alum);
					agregarEnPila(pila_1, alum);
				} else if(pila_elegida==2){
					cargarAlumno(alum);
					agregarEnPila(pila_2, alum);
				} else {
					cout<<"OPCION NO VALIDA";
				}
				break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case default:
				cout<<"Opcion Invalida";  break;
		}
	} while (opcion !=5 )
}

void cargarAlumno(Alumno &a){
	fflush(stdin);
	cout<< "\tIngrese los datos del Alumno"<<endl;
	
	cout<< "Nombre: ";  
	cin.getline(a.nombre, 30, '\n');
	
	cout<<"DNI: ";
	cin >> a.dni;
	
	cout<<"Edad: ";
	cin >> a.edad;	
};

void agregarEnPila(Nodo * &pila, Alumno &alum){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->alum = alum;
	nuevo_nodo->siguiente = pila;
	
	pila = nuevo_nodo;
	cout << "Alumno agregado correctamente a la Pila"<<endl;
}

void eliminarEnPila
