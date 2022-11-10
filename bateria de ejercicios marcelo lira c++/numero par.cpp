/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	float numero;
	cout << "Introduce un numero" << endl;
	cin >> numero;
	while ((numero<=0)) {
		cout << "escribe un numero mayor que 0" << endl;
		cin >> numero;
	}
	if ((numero>2==0)) 
		cout << "El " << numero << " es par" << endl;
	 else {
		cout << "El " << numero << " no es par" << endl;
	}
	return 0;
}

