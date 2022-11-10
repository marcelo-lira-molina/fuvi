/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float ano;

	float dia;
	int mes;
	cout << "Introduce el dia" << endl;
	cin >> dia;
	cout << "Introduce el mes" << endl;
	cin >> mes;
	cout << "Introduce el ano" << endl;
	cin >> ano;
	if (((dia<=31 && dia>=0) && (mes<=12 && mes>=0) && ano>0)) {
		cout << dia;
		switch (mes) {
		case 1:
			cout << " de enero de";
			break;
		case 2:
			cout << " de febrero de ";
			break;
		case 3:
			cout << " de marzo de ";
			break;
		case 4:
			cout << " de abril de ";
			break;
		case 5:
			cout << " de mayo de ";
			break;
		case 6:
			cout << " de junio de ";
			break;
		case 7:
			cout << " de julio de ";
			break;
		case 8:
			cout << " de agosto de ";
			break;
		case 9:
			cout << " de septiembre de ";
			break;
		case 10:
			cout << " de octubre de ";
			break;
		case 11:
			cout << " de noviembre de ";
			break;
		case 12:
			cout << " de diciembre de ";
			break;
		}
		cout << ano << endl;
	} else {
		cout << "error" << endl;
	}
	return 0;
}

