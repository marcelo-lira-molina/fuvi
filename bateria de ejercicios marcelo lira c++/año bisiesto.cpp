/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float ano;

	cout << "Introduce un año" << endl;
	cin >> ano;
	if ((ano mod 4==0 && ano mod 1000)) {
		cout << "El año " << ano << " es bisiesto" << endl;
	} else {
		if ((ano mod 400==0 && ano mod 100==0)) {
			cout << "El año " << ano << " es bisiesto" << endl;
		} else {
			cout << "El año " << ano << " no es bisiesto" << endl;
		}
	}
	return 0;
}

