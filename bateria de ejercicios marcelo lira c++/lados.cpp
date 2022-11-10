/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	float asterisco;
	float espacio;
	float lado;
	cout << "digite el numero de lados" << endl;
	cin >> lado;
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	cout << " " << endl;
	for (asterisco=1;asterisco<=lado-2;asterisco++) {
		cout << "*";
		for (espacio=1;espacio<=lado-2;espacio++) {
			cout << " ";
		}
		cout << "*";
		cout << " " << endl;
	}
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	return 0;
}

