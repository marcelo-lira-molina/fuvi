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
	int maximo;
	int x;
	cout << "Ingresa dos numeros" << endl;
	cin >> a >> b;
	if (a>0 && b>0) {
		maximo = 1;
		x = 1;
		while (x<=a) {
			if (a%x==0 && b%x==0) {
				if (x>maximo) {
					maximo = x;
				}
			}
			x = x+1;
		}
		cout << "El maximo comun divisor es: " << maximo << endl;
	} else {
		cout << "Debes ingresar numeros mayores a cero" << endl;
	}
	return 0;
}

