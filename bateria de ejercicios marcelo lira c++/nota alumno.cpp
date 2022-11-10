/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;


int main() {
	string alumno;
	float nota_final;
	float nota_practica;
	float nota_problemas;
	float nota_teoria;
	cout << "Introduce el nombre del alumno" << endl;
	cin >> alumno;
	while (alumno!="") {
		cout << "Introduce la nota practica" << endl;
		cin >> nota_practica;
		cout << "Introduce la nota de problemas" << endl;
		cin >> nota_problemas;
		cout << "Introduce la nota de teoria" << endl;
		cin >> nota_teoria;
		if ((nota_practica<=10 && nota_practica>=0) && (nota_problemas<=10 && nota_problemas>=0) && (nota_teoria<=10 && nota_teoria>=0)) {
			cout << "El alumno " << alumno << endl;
			cout << "La nota practica es " << nota_practica << endl;
			cout << "La nota de problemas es " << nota_problemas << endl;
			cout << "La nota de teoria es " << nota_teoria << endl;
			nota_practica = nota_practica*0.1;
			nota_problemas = nota_problemas*0.5;
			nota_teoria = nota_teoria*0.4;
			nota_final = nota_practica+nota_problemas+nota_teoria;
			cout << "La nota final es " << nota_final << endl;
		} else {
			cout << "Has escrito una nota incorrecta, vuelve a intentarlo" << endl;
		}
		cout << "Introduce el nombre de otro alumno" << endl;
		cin >> alumno;
	}
	return 0;
}

