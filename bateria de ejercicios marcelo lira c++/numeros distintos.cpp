/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float numero1;
	float numero2;
    float numero3;
	cout << "Introduce el primer numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	cout << "Introduce el tercer numero" << endl;
	cin >> numero3;
	if ((numero1>numero2 && numero1>numero3)) {
		cout << "el numero " << numero1 << " es el mayor" << endl;
	} else {
		if ((numero2>numero3)) {
			cout << "El numero " << numero2 << " es el mayor" << endl;
		} else {
			cout << "El numero " << numero3 << " es el mayor" << endl;
		}
	}
	return 0;
}

