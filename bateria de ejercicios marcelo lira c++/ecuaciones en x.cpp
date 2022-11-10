/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int resultado;
	int x;
	cout << "digite el valor de X positivo o negativo" << endl;
	cin >> x;
	if (x>=1) {
		resultado = (x-pow(2,2)/2+x-pow(4,4)/4+x-pow(6,6)/6);
	}
	if (x<=1) {
		resultado = (x+pow(2,2)/2+x+pow(4,4)/4+x+pow(6,6)/6);
	}
	cout << "la ecuacion es igual a:" << resultado << endl;
	return 0;
}

