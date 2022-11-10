/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float i;
	float n;
	float resultado;
	cout << "Escribe N" << endl;
	cin >> n;
	if (n<1) {
		cout << "Debe ser mayor o igual que 1" << n>0 << endl;
		resultado = 0;
		for (i=1;i<=n;i++) {
			resultado = pow(i,2);
			cout << "El valor al cuadrado de " << i << " es de " << resultado << endl;
		}
	}
	return 0;
}

