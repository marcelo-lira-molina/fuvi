/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int resultado;
	cout << "digite el valor de A" << endl;
	cin >> a;
	cout << "digite el valor de B" << endl;
	cin >> b;
	if (a>=1 && b>=1) {
		resultado = a/a*(a-b)*b;
	} else {
		cout << "vuelva a intentar" << endl;
	}
	cout << "la ecuacion es igual a" << resultado << endl;
	return 0;
}

