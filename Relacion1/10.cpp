#include <iostream>
#include <cmath>
using namespace std;
	
int main(){
	float precio, ingresado;
	int euro=0, cincuenta=0, veinte=0, diez=0, cinco=0;

	cout << "Introduce el precio de la bebida: ";
	cin >> precio;
	cout << "Introduzca en céntimos su importe: ";
	cin >> ingresado;
	
	ingresado = ingresado - precio;
	
	while(ingresado >= 100){
		ingresado -= 100;
		euro += 1;
		}
	while(ingresado >= 50){
		ingresado -= 50;
		cincuenta += 1;
		}
	while(ingresado >= 20){
		ingresado -= 20;
		veinte += 1;
		}
	while(ingresado >= 10){
		ingresado -= 10;
		diez += 1;
		}
	while(ingresado >= 5){
		ingresado -= 5;
		cinco += 1;
		}
		
	cout << "\n" << euro << " euros";
	cout << "\n" << cincuenta << " monedas de 50";
	cout << "\n" << veinte << " monedas de 20";
	cout << "\n" << diez << " monedas de 10";
	cout << "\n" << cinco << " monedas de 5";
	}
	

