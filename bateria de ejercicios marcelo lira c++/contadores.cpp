/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float contador;
	float maximo;
	float media;
	float minimo;
	float num;
	float suma;
	minimo = num;
	maximo = num;
	suma = 0;
	cout << "escribe 2 numeros para saber su valores maximos minimos y su media" << endl;
	cin >> num;
	 {
		if ((num>maximo)) {
			maximo = num;
		}
		if ((num<minimo)) {
			minimo = num;
		}
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	media = suma/(contador);
	cout << "El maximo es " << maximo << endl;
	cout << "El minimo es " << minimo << endl;
	cout << "La media es " << media << endl;
	return 0;
}

