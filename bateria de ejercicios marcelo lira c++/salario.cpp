/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	int extras;
	int horas;
	string nombre;
	float pago;
	float sueldo;
	cout << "Ingresa el nombre" << endl;
	cin >> nombre;
	cout << "Ingresa las horas trabajadas" << endl;
	cin >> horas;
	cout << "Ingresa el pago por hora" << endl;
	cin >> pago;
	if (horas>48) {
		extras = horas-48;
		sueldo = (48*pago)+(extras*(pago+pago*.35));
		cout << nombre << endl;
		cout << "El sueldo por 48 horas es: $" << 48*pago << endl;
		cout << "Horas extras trabajadas " << extras << endl;
		cout << "Sueldo extra es: $" << (extras*(pago+pago*.5)) << endl;
		cout << "El sueldo total es: $" << sueldo << endl;
	} else {
		sueldo = horas*pago;
		cout << nombre << endl;
		cout << "El sueldo por " << horas << " horas es: $" << sueldo << endl;
	}
	return 0;
}

