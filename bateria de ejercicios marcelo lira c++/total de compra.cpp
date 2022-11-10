/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	float importe;
	string mes;
	float total;
	cout << "escribe el importe de la compra" << endl;
	cin >> importe;
	cout << "Introduce el mes" << endl;
	cin >> mes;
	if ((mes=="octubre")) {
		total = importe*0.85;
	} else {
		total = importe;
	}
	cout << total << endl;
	return 0;
}

