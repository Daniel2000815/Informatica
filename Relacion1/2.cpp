#include <iostream>
using namespace std;

int main(){
	float capital;
	float interes;
	float total;
	
	cout << "Introduzca el valor de su capital: ";							// Asigno valores
	cin >> capital;
	
	cout << "Introduzca el valor del interés entre 0 y 100: ";
	cin >> interes;
	
	if((interes>=0) & (interes<=100)){										// Compruebo que el valor de interés es válido
		total = capital + (capital*(interes/100));							// Calculo el total
		cout << "El valor total es: " << total;								// Imprimo valor
		capital = total;													// Asigno a la variable capital el valor de total
	}
	
	else{cout << "El valor introducido no es válido";}						// Si no lo es imprimo mensaje
	}

	/* Para hacer eso bastaría con sustituir total por capital en la línea 16*/
