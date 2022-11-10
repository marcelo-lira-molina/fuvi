/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	int gasolinasuper;
	int litros;
	float n;
	float precio;
	float total;
	int x;
	cout << "escoga el tipo de combustible  " << endl;
	cout << "gasolina super 33.48C$" << endl;
	cout << "gasolina regular 32.85C$" << endl;
	cout << "diesel 28.45" << endl;
	cout << "Ingresa el precio de combustible a utilizar: " << endl;
	cin >> precio;
	x = 1;
	total = 0;
	litros = 0;
	while (x!=0) {
		cout << "Ingresa los litros de gasolina" << endl;
		cin >> n;
		total = total+(precio*n);
		litros = litros+n;
		cout << "gracias por su compra!" << endl;
		cout << "El total a pagar por " << litros << " litros de su combustible es: C$" << total << endl;
	}
	return 0;
}

