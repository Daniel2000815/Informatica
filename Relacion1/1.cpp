#include <iostream>
using namespace std;

int main(){
	float v;
	float r;
	float i;
	
	cout << "Introduzca el valor de la Resistencia: ";
	cin >> r;
	
	cout << "Introduzca el valor de la Intensiad: ";
	cin >> i;
	
	v = r*i;
	
	cout << "El valor del voltaje es: " << v;
	}
