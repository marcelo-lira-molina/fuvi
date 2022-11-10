/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float contador;
	float limite;
	float n;
	float suma;
	cout << "escribe un numero" << endl;
	cin >> n;
	contador = 0;
	limite = n;
	while ((contador<limite)) {
		if ((n>2==0)) {
			suma = n+suma;
			contador = contador+1;
		}
		n = n+1;
	}
	cout << suma << endl;
	return 0;
}

