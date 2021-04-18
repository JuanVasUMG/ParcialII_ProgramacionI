// Juan Luis Vásquez López 0909-20-6391
// Proramación 1 Semestre 3 Ciclo 2021
// Examen Parcial 2 Serie II

//<--- Declaración de Librerias --->
#include <iostream>
#include <conio.h>

using namespace std;

// <--- Declaración de Variables y Vectores --->
int curso[2][5]; // [Vector][Estudiante]
int sumCurso[2]; // [Vector del Curso]
float promCurso[2]; // [Suma de Vector de curso]
int c, e, op; // Variables pointer y opcion

// <--- Estructura para Ingreso de cada Curso --->
void ingresoDatos(){
	for ( c = 0; c <= 1; c++ ){ // Saltos en cada curso "1 y 2"
		for ( e = 0; e <= 4; e++ ){ // Saltos en cada estudiante "1-5"
			cout << "Ingreso de nota en la clase " << c + 1 << " del estudiante " << e + 1 << " = "; 
			cin >> curso[c][e]; // Ingreso de Datos
		}
	}
}

// <--- Estructura para calcular el promedio de cada curso --->
void calculoPromedio(){
	for ( c = 0; c <= 1; c++ ){ // Saltos en cada curso "1 y 2"
		for ( e = 0; e <= 4; e++ ){ // Saltos en cada estudiante "1-5"
			sumCurso[c] += curso[c][e]; // Suma de cada clase 
		}
		promCurso[c] = sumCurso[c] / 5; // Promedio de cada clase
	}
}

// <--- Estructura para Mostrar en Pantalla los vectores y sus promedios --->
void mostrarVectores(){
	cout << "Vector Curso 1"; 
	for ( e = 0; e <= 4; e++ ){ // Saltos en cada estudiante "1-5" del primer curso
		cout << "     " << curso[0][e];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[0]; // Mostrar promedio
	
	cout << "Vector Curso 2";
	for ( e = 0; e <= 4; e++ ){ // Saltos en cada estudiante "1-5" del segundo curso
		cout << "     " << curso[1][e];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[1]; // Mostrar promedio
}

// <--- Estructura Principal C++ --->
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Bienvenidos al programa Vector Curso" << endl;
		cout << "1. Ingresar datos de cada curso" << endl;
		cout << "2. Mostrar la primera nota del Vector 1" << endl;
		cout << "3. Mostrar la última nota del Vector 2" << endl;
		cout << "4. Calcule el promedio de los cursos." << endl;
		cout << "5. Mostrar los dos Vectores, y el resultado Promedio de cada curso." << endl;
		cout << "6. Finalizar." << endl;
		cout << "Elija Una Opcion --> "; cin >> op; // Ingreso de Opcion
		cout << endl << endl;
		
		switch ( op ){ //Segun la opcion elegida
			case 1: 
				ingresoDatos(); // Llamado de la funcion de ingreso de datos
				system ("cls");  // Limpiamos pantalla
				break; // Salir Switch
			case 2: 
				cout << "La primera nota del Vector 1 es: " << curso[0][0];  // Mostrar 
				getch(); // Detener Programa
				system ("cls"); // Limpiar Pantalla 
				break;
			case 3: 
				cout << "La ultima nota del Vector 2 es: " << curso[1][4]; 
				getch(); // Detener Programa
				system ("cls"); // Limpiar Pantalla
				break; // Salir Switch
			case 4: 
				calculoPromedio();
				cout << "El calculo se ha Realizado Exitosamente" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); // Limpiar Pantalla
				break; // Salir Switch
			case 5: 
				mostrarVectores();
				system ("cls"); // Detener Programa
				break; // Salir Switch
			case 6: break; // Salir Switch
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); // Limpiar Pantalla
		}
	} while ( op != 6 ); // Mientras op sea diferente a 6 seguir con el do While
}






