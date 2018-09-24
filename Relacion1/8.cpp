#include <iostream>
#include <cmath>
using namespace std;

void factorizar(int num, int exp){										// Función recursiva para separar números
	float resto;														// Irá teniendo el valor del número que estoy separando menos 10^x
	int digito;															// Irá teniendo el valor de cada uno de los números de "valor" de izquierda a derecha
	
	digito = num/pow(10,exp);											// Ej: 678 = division entera de 678/10^2
	resto = num - digito*pow(10,exp);									// Ej: 678 - 6*10^2 = 78. Este será el siguiente número que trate de separar
	
	cout << "\n" << digito;												// Imprimo valor
	
	exp -= 1;															// Ahora el número a separar es 10 veces más pequeño que el anterior.
	if(exp>=0){factorizar(resto, exp);}									// Si el número se sigue pudiendo dividir llamo a la función de nuevo
	}
	
int main(){
	int valor;															// Declaro variable
	
	cout << "Escriba un valor de 3 dígitos: ";							// Asigno valor
	cin >> valor;
	
	if((valor > 99) & (valor < 1000)){factorizar(valor,2);}				// Si el valor introducido es válido procedo a calcular
	else{cout << "El valor introducido no es válido";}
}
