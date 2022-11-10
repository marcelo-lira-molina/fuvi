/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float numero;
	float potencia;
	float raiz_cuadrada;
	cout << "Introduce un numero" << endl;
	cin >> numero;
	if ((numero>0)) {
		potencia = pow(numero,2);
		raiz_cuadrada = sqrtf(numero);
		cout << "Su potencia es " << potencia << endl;
		cout << "Su raiz es " << raiz_cuadrada << endl;
	} else {
		cout << "Error, introduce un numero mayor que 0" << endl;
	}
	return 0;
}

