#include <iostream>
#include <cmath>
using namespace std;

int sumatorio(int n){
	int sumatoria=0;
	for(int i=1; i<=n;i++){
			sumatoria += i;
		}
	return sumatoria;
	}


int main(){
	int n = 3;	
	double media, desviacion;
		
	media = 1/n * sumatorio(n);
	desviacion = sqrt(1/n)
}
