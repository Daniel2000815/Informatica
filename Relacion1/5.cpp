#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double ganancia, ganancia_Dividida;									// Declaro variables
	double sueldo_Disenador, sueldo_Fabricante;
	
	cout << "Introduzca el valor de la ganancia: ";						// Asigno valores
	cin >> ganancia;
	
	ganancia_Dividida = ganancia/5;	
																		// Como el diseñador cobra el doble, es como si hubiera 5 personas
	sueldo_Disenador = ganancia_Dividida * 2;							// Calculo los sueldos
	sueldo_Fabricante = ganancia_Dividida;									
	
	cout << "El diseñador cobrará " << sueldo_Disenador << "€";			// Imprimo resultados
	cout << "\nCada fabricante cobrará " << sueldo_Fabricante << "€";
	}
