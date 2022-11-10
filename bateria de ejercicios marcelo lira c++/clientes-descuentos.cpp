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
	int n;
	string nombre;
	float peso;
	string telefono;
	string vector;
	int x;
	cout << "Cuantos clientes desea ingresar" << endl;
	cin >> n;
	for (x=1;x<=n;x++) {
		cout << "Ingresa el nombre del cliente " << x << endl;
		cin >> vector[x-1];
	}
	for (x=1;x<=n;x++) {
		cout << "Cliente " << vector[x-1] << endl;
	}
	for (x=1;x<=n;x++) {
		cout << "ingrese el numero de celular de " << "" << vector[x-1] << endl;
		cin >> telefono;
	}
	for (x=1;x<=n;x++) {
		cout << "ingrese el peso del cliente " << "" << vector[x-1] << endl;
		cin >> peso;
	}
	for (x=1;x<=n;x++) {
		cout << "ingrese la estatura del cliente " << " " << vector[x-1] << endl;
		cin >> estatura;
	}
	for (x=1;x<=n;x++) {
		imc = peso/(estatura*estatura);
		if ((imc<20)) {
			cout << vector[x-1] << " es delgado" << endl;
			cout << "su IMC es de:" << imc << endl;
		} else {
			if ((imc>=20 && imc<=23)) {
				cout << vector[x-1] << " tiene peso normal " << endl;
				cout << "su IMC es de:" << imc << endl;
			} else {
				if ((imc>=26 && imc<=23)) {
					cout << vector[x-1] << "" << "tiene sobrepeso  ¿Desea llamarlo a su numero?:" << "" << telefono << endl;
					cout << "su IMC es de:" << imc << endl;
				} else {
					cout << vector[x-1] << "" << " esta en obesidad  ¿Desea llamarlo? a su numero :" << "" << telefono << endl;
					cout << "su IMC es de:" << imc << endl;
				}
			}
		}
	}
	return 0;
}

