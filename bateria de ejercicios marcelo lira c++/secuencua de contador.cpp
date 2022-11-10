/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float contador;
	float num;
	float suma;
	cin >> num;
	suma = 0;
	contador = 1;
	while ((num!=-1)) {
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	cout << suma/(contador-1) << endl;
	return 0;
}

