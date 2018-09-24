#include <iostream>
#include <cmath>
using namespace std;
	
int main(){
	int horas, minutos, segundos;
	
	cout << "Introduce las horas: ";
	cin >> horas;
	cout << "Introduce los minutos: ";
	cin >> minutos;
	cout << "Introduce los segundos: ";
	cin >> segundos;
	
	while (segundos > 60){
		minutos += 1;
		segundos = segundos-60;
		}
		
	while (minutos > 60){
	horas += 1;
	minutos = minutos-60;
	}
	
	cout << horas << ":" << minutos << ":" << segundos;
}
