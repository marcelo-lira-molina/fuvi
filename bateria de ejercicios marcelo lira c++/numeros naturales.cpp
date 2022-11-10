/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float num;
	float res;
	cout << "escribe un numero ";
	cin >> num;
	for (num=1;num<=9;num++) {
		res = pow(num,2);
		cout << num << " " << res << endl;
	}
	return 0;
}

