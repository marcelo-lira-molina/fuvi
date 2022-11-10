/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float grados_c;
	float grados_f;
	float temperaturaengradoscelsius;
	cout << "Introduzca una temperatura en grados Celsius: " << endl;
	cin >> grados_c;
	grados_f = (9/5)*grados_c+32;
	cout << grados_c << " grados Celsius = " << grados_f << " grados Fahrenheit." << endl;
	return 0;
}

