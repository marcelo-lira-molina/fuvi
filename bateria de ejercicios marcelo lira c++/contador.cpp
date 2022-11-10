/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;



int main() {
	float contador;
	float n;
	float suma;
	cout << "digite un numero a contar " << endl;
	cin >> n;
	suma = 0;
	for (contador=1;contador<=5;contador++) {
		suma = n+suma;
		n = n+1;
	}
	cout << suma << endl;
	return 0;
}

