/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	string bachiller;
	string prueba_acceso;
	cout << "¿Tienes el titulo de bachiller?" << endl;
	cin >> bachiller;
	if ((bachiller=="si")) {
		cout << "Puedes acceder al grado superior" << endl;
	} else {
		cout << "¿Tienes la prueba de acceso superada?" << endl;
		cin >> prueba_acceso;
		if ((prueba_acceso=="si")) {
			cout << "Puedes acceder al grado superior" << endl;
		} else {
			cout << "No puedes acceder a un grado superior" << endl;
		}
	}
	return 0;
}

