/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float cant_cerveza;
	float cant_jamon;
	float cant_refresco;
	float cerveza;
	float jamon;
	float refresco;
	float total;
	jamon = 1.5;
	refresco = 1.05;
	cerveza = 0.75;
	total = 0;
	cout << "Introduce la cantidad de bocadillos de jamon" << endl;
	cin >> cant_jamon;
	cout << "Introduce la cantidad de refresco" << endl;
	cin >> cant_refresco;
	cout << "Introduce la cantidad de cerveza" << endl;
	cin >> cant_cerveza;
	total = ((cant_jamon*jamon))+(cant_refresco*refresco)+((cant_cerveza*cerveza));
	cout << total << endl;
	return 0;
}

