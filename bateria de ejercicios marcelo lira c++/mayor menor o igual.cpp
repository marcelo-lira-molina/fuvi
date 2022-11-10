/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	double numero1;
	double numero2;
	cout << "Introduce el primer numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	if ((numero1>=numero2)) {
		if ((numero1==numero2)) {
			cout << "los numeros " << numero1 << " " << numero2 << " son iguales" << endl;
		} else {
			cout << numero1 << " es el mayor de los dos" << endl;
		}
	} else {
		cout << numero2 << " es el mayor de los dos" << endl;
	}
	return 0;
}

