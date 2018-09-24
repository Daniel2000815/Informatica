#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float mu, sigma, x;
	
	float resultado;
		
	cout << "Introduzca el valor de mu: ";										//Introduzco valores de las variables
	cin >> mu;
	
	cout << "Introduzca el valor de sigma: ";
	cin >> sigma;
	
	cout << "Introduzca el valor de x: ";
	cin >> x;
	
	resultado = (1/(sigma*sqrt(2*M_PI))) * exp(-1/2*pow((x-mu)/sigma,2)); 		// Calculo

	cout << "El resultado es " << resultado;									// Imprimo resultado
	}
	
	


