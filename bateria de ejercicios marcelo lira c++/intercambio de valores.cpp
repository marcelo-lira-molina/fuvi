/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	double a;
	double b;
	double c;
	cout << "Introduce el valor de A" << endl;
	cin >> a;
	cout << "Introduce el valor de B" << endl;
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "A vale " << a << " y B vale " << b << endl;
	return 0;
}

