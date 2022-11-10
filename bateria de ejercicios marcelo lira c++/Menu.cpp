/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	float cervezas;
	float jamon;
	float refrescos;
	float total;
	cout << "Introduzca la cantidad servida de ..." << endl;
	cout << "... bocadillos de jamon: " << endl;
	cin >> jamon;
	cout << "... refrescos: " << endl;
	cin >> refrescos;
	cout << "... cervezas: " << endl;
	cin >> cervezas;
	total = (jamon*1.5)+(refrescos*1.05)+(cervezas*0.75);
	cout << "El total de la cuenta es: " << total << endl;
	return 0;
}

