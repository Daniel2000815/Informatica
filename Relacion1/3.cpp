#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float radio;
	float longitud;
	float area;
	
	cout << "Introduzca el valor del radio: ";								// Asigno valor al radio
	cin >> radio;
	
	longitud = 2*M_PI*radio;												// Hago operaciones
	area = M_PI*pow(radio,2);

	cout << "La longitud de la circunferencia es: " << longitud << "\n";	// Imprimo resultado
	cout << "El área de la circunferencia es: " << area << "\n";
	}

	/*Los resultados utilizando más decimales son mucho más precisos. En este caso usaré
	 la librería math para tener el valor de pi*/
