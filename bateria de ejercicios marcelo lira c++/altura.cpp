/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	float altura;
	float asterisco;
	float asterisco_linea;
	float espacio;
	float espacio_linea;
	float linea;
	cout << "digite espacios" << endl;
	cin >> altura;
	asterisco = altura;
	espacio = 0;
	for (linea=1;linea<=altura;linea++) {
		for (espacio_linea=0;espacio_linea<=espacio;espacio_linea++) {
			cout << " ";
		}
		for (asterisco_linea=1;asterisco_linea<=asterisco;asterisco_linea++) {
			cout << "*";
		}
		asterisco = asterisco-1;
		espacio = espacio+1;
		cout << " " << endl;
	}
	return 0;
}

