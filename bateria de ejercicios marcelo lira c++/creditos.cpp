/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float credito;
	float sueldo;
	cout << "Ingresa el valor de sueldo:";
	cin >> sueldo;
	credito = 0;
	if (sueldo<200000) {
		cout << "No tiene derecho a credito." << endl;
	}
	if (sueldo>=200000 && sueldo<500000) {
		credito = 500000;
	}
	if (sueldo>=500000 && sueldo<1000000) {
		credito = 2000000;
	}
	cout << "Valor de credito: " << credito << endl;
	return 0;
}

