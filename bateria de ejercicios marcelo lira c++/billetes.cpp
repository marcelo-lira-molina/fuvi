/*
Bateria de Ejercicios
Autor:Marcelo Lira
Lugar:ITV
*/
#include<iostream>
using namespace std;

int main() {
	float billetes_de_100;
	float billetes_de_1000;
	float billetes_de_20;
	float billetes_de_200;
	float billetes_de_50;
	float billetes_de_500;
	double cantidad_de_dinero;
	double cordoba;
	double cordobas;
	float monedas_de_1;
	float monedas_de_2;
	float monedas_de_5;
	cout << "Ingresa el valor de cantidad de dinero:";
	cin >> cantidad_de_dinero;
	monedas_de_1 = cantidad_de_dinero;
	billetes_de_1000 = monedas_de_1monedas_de_1000/1000;
	monedas_de_1 = monedas_de_1%1000;
	billetes_de_500 = (monedas_de_1monedas_de_500)/500;
	monedas_de_1 = monedas_de_1%500;
	billetes_de_200 = (monedas_de_1monedas_de_200)/200;
	monedas_de_1 = monedas_de_1%200;
	billetes_de_100 = (monedas_de_1monedas_de_100)/100;
	monedas_de_1 = monedas_de_1%100;
	billetes_de_50 = (monedas_de_1monedas_de_50)/50;
	monedas_de_1 = monedas_de_1%50;
	billetes_de_20 = (monedas_de_1monedas_de_20)/20;
	monedas_de_1 = monedas_de_1%20;
	monedas_de_1 = monedas_de_1%10;
	monedas_de_5 = (monedas_de_1monedas_de_1%5)/5;
	monedas_de_1 = monedas_de_1%5;
	monedas_de_2 = (monedas_de_1monedas_de_1%2)/2;
	monedas_de_1 = monedas_de_1%2;
	cout << "Valor de billetes de 100 cordobas: " << billetes_de_100 << cordobas << endl;
	cout << "Valor de billetes de 1000 cordobas: " << billetes_de_1000 << cordobas << endl;
	cout << "Valor de billetes de 20 cordobas: " << billetes_de_20 << cordobas << endl;
	cout << "Valor de billetes de 200 cordobas: " << billetes_de_200 << cordobas << endl;
	cout << "Valor de billetes de 50 cordobas: " << billetes_de_50 << cordobas << endl;
	cout << "Valor de billetes de 500 cordobas: " << billetes_de_500 << cordobas << endl;
	cout << "Valor de monedas de 1 cordoba: " << monedas_de_1 << cordoba << endl;
	cout << "Valor de monedas de 5: " << monedas_de_5 << cordobas << endl;
	return 0;
}

