/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float estatura;
	float imc;
	string nombre;
	float peso;
	cout << "ingrese su nombre " << endl;
	cin >> nombre;
	cout << "ingrese su peso en (kg):" << endl;
	cin >> peso;
	cout << "ingrese su esatura en (Mts):" << endl;
	cin >> estatura;
	imc = peso/(estatura*estatura);
	cout << "su IMC es de:" << imc << endl;
	if ((imc<20)) {
		cout << nombre << "usted es delgado" << endl;
	} else {
		if ((imc>=20 && imc<=23)) {
			cout << nombre << " tiene peso normal" << endl;
		} else {
			if ((imc>=26 && imc<=23)) {
				cout << nombre << "usted tiene sobrepeso" << endl;
			} else {
				cout << nombre << "usted  esta en obesidad" << endl;
			}
		}
	}
	return 0;
}

