/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float media;
	float n;
	float suma;
	int total;
	int x;
	cout << "Ingresa el total de numeros" << endl;
	cin >> total;
	x = 1;
	suma = 0;
	while (x<=total) {
		cout << "Ingresa el numero " << x << endl;
		cin >> n;
		suma = suma+n;
		x = x+1;
	}
	media = suma/total;
	cout << "La media aritmetica es: " << media << endl;
	return 0;
}

