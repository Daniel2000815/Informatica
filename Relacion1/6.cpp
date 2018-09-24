#include <iostream>
using namespace std;

int main(){
	int edad_Pedro, edad_Juan;							// Creo las variables con la edad real
	int temporal_Pedro;					// Creo las variables auxiliares para poder realizar el intercambio
	
	cout << "Introduce la edad de Pedro: " ;
	cin >> edad_Pedro;							
	temporal_Pedro = edad_Pedro;						// Asigno los valores a ambas variables, cuyos valores son iguales de momento
	
	cout << "Introduce la edad de Juan: " ;
	cin >> edad_Juan;

	edad_Pedro = edad_Juan;							// Realizo el intercambio
	edad_Juan = temporal_Pedro;
	
	cout << "La edad de Juan es " << edad_Juan;			//Imprimo los nuevos valores
	cout << "\nLa edad de Pedro es " << edad_Pedro;	
}

/*No funciona porque si sustituyo una variable luego no podré hacer el intercambio, ya que 
el valor habrá cambiado a ser el mismo en ambas variables*/
