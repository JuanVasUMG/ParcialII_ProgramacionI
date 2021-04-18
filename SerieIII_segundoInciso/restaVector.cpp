// Juan Luis Vásquez López 0909-20-6391
// Proramación 1 Semestre 3 Ciclo 2021
// Parcial 2 Serie III Segundo Inciso

//<--- Declaración de Librerias --->
#include <iostream>
#include <conio.h>

using namespace std;

// <--- Declaración de Variables y Vectores --->
int vectorA[3], vectorB[3], vectorC[3]; // Vectores a utilizar
float prom_C; // Variable para promedio
int pointer, sum_C; // Variable pointer y suma del vector C

// <--- Estructura para Ingreso del vector A --->
void ingresoDatosA(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ // Saltos en cada espacio del vector
		cout << "Ingrese el dato " << pointer + 1 << " del Vector A = "; 
		cin >> vectorA[pointer]; // Ingreso de Datos
	}
}

// <--- Estructura para Ingreso del vector B --->
void ingresoDatosB(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ // Saltos en cada espacio del vector
		cout << "Ingrese el dato " << pointer + 1 << " del Vector B = "; 
		cin >> vectorB[pointer]; // Ingreso de Datos
	}
}

// <--- Estructura para Resta del vector A y B --->
void restaVector(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ // Saltos en cada espacio del vector
		vectorC[pointer] = vectorA[pointer] - vectorB[pointer];
	}
}

// <--- Estructura para promedio del Vector C --->
void promedioVectorC(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ // Saltos en cada espacio del vector
		sum_C += vectorC[pointer];
	}
	prom_C = sum_C / 3;
}

// <--- Estructura Principal C++ --->
int main(){	
	cout << "Bienvenidos al programa Resta de Vectores" << endl << endl;
	ingresoDatosA(); // Llamamos a la funcion Ingreso de Datos del vector A
	ingresoDatosB(); // Llamamos a la funcion Ingreso de Datos del vector B
	restaVector(); // Llamamos a la funcion resta del vector C
	promedioVectorC(); // Llamamos a la funcion Promedio del Vector C	
	cout << endl;
	
	// Mostramos en pantalla
	cout << "   Vector A" << endl;
	cout << "  " << vectorA [0] << "  " << vectorA [1] << "  " << vectorA [2] << endl << endl;
	
	cout << "   Vector B" << endl;
	cout << "  " << vectorB [0] << "  " << vectorB [1] << "  " << vectorB [2] << endl << endl;
	
	cout << "   Vector C" << endl;
	cout << "  " << vectorC [0] << "  " << vectorC [1] << "  " << vectorC [2] << endl << endl;
	
	cout << "\nPromedio del Vector C = " << prom_C;
	
	getch(); // Detener el Programa
}
