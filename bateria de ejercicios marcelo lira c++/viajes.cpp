/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

/* si los dias son superior a 7 y una distancia mayor a 1000km tendra el descuento*/
int main() {
	float descuento;
	int dias;
	float distancia;
	float precio_de_ida;
	float precio_de_regreso;
	float precio_total;
	cout << "Ingrese los dias de estancia" << endl;
	cin >> dias;
	cout << "Ingrese la distancia del viaje" << endl;
	cin >> distancia;
	precio_total = dias*8.50;
	if ((dias)>(7) && (distancia)>(1000)) {
		descuento = (precio_total*0.3);
		precio_total = precio_total-descuento;
	}
	precio_de_ida = precio_total/2;
	precio_de_regreso = precio_total/2;
	cout << "Precio de Ida: " << precio_de_ida << endl;
	cout << "Precio de regreso: " << precio_de_regreso << endl;
	cout << "Descuento con un 30% es: " << descuento << endl;
	return 0;
}

