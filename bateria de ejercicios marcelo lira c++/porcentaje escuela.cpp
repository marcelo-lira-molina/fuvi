/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	double numero_ninas;
	double numero_ninos;
    double porcentaje_ninas;
	double porcentaje_ninos;

	cout << "Introduce el numero de ninos" << endl;
	cin >> numero_ninos;
	cout << "Introduce el numero de ninas" << endl;
	cin >> numero_ninas;
	porcentaje_ninos = numero_ninos*100/(numero_ninos+numero_ninas);
	porcentaje_ninas = 100-porcentaje_ninos;
	cout << "Hay un " << porcentaje_ninos << " % de niños" << endl;
	cout << "Hay un " << porcentaje_ninas << " % de niñas" << endl;
	return 0;
}

