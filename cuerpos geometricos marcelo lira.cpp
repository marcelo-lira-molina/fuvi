
#include<iostream>
#include<cmath>

/*
Nombrre del archivo: calculos de cuerpos geometricos
Autor: Marcelo Lira
Lugar: ITV
*/
using namespace std;
int main() {
	float abase;
	float altura;
	float apotema;
	float area;
	float arealateral;
	float arista;
	float basemenor;
;
	int datoin;
	float diagonal;
	float generatriz;
	float lado;
	float n;
	float perimetro;
	float perimetrobasemayor;
	float perimetrobasemenor;
	float perimetrobasemenordatoin;
	float perimetromayor;
	float perimetromenor;
	float pi;
	float radio;
	float radiomayor;
	float radiomenor;
	float raiz2;
	float raiz3;
	float raiz5;
	float raiz6;
	float volumen;
	do {
		cout << "" << endl;
		cout << "Que  FIGURAS GEMETRICAS desea calcular?" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UN CILINDRO PRESIONE  1" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UNA ESFERA PRESIONE 2" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UN CONO PRESIONE  3" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UNA piramide PRESIONE  4" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UN PRISMA PRESIONE 5" << endl;
		cout << "" << endl;
		cout << "PARA CALCULAR UN CONO TRUNCADO PRESIONE 6" << endl;
		cout << "" << endl;
		cout << "para calcular un tronco de piramide presione 7 " << endl;
		cout << "" << endl;
		cout << "para calcular un Tetraedro presione 8 " << endl;
		cout << "" << endl;
		cout << "para calcular un Hexaedro presione 9 " << endl;
		cout << "" << endl;
		cout << "para calcular un  Octaedro presione 10" << endl;
		cout << "" << endl;
		cout << "para calcular un Dodecaedro presione 11" << endl;
		cout << "" << endl;
		cout << "para calcular un Icosaedro presione 12" << endl;
		cout << "" << endl;
		cout << "para salir presione 0" << endl;
		cout << "" << endl;
		cin >> datoin;
		switch (datoin) {
		case 1:
			cout << "Digite la altura del cilindro" << endl;
			cin >> altura;
			cout << "Digite el radio de la base del cilindro" << endl;
			cin >> radio;
			area = 2*M_PI*radio*(altura+radio);
			volumen = M_PI*pow(radio,2)*altura;
			cout << "" << endl;
			cout << "El volumen del cilindro es " << volumen << " unidades cúbicas" << endl;
			cout << "" << endl;
			cout << "El área del cilindro es " << area << " unidades cuadradas" << endl;
			break;
		case 2:
			cout << "Digite el radio de la esfera" << endl;
			cin >> radio;
			area = 4*M_PI*pow(radio,2);
			volumen = (4*M_PI*pow(radio,3))/3;
			cout << "" << endl;
			cout << "El volumen de la esfera es " << volumen << " unidades cúbicas" << endl;
			cout << "" << endl;
			cout << "El área del de la esfera " << area << " unidades cuadradas" << endl;
			break;
		case 3:
			cout << "Digite la altura del cono" << endl;
			cin >> altura;
			cout << "Digite el radio de la base del cono" << endl;
			cin >> radio;
			cout << "Digite la generatriz del cono" << endl;
			cin >> generatriz;
			area = M_PI*pow(radio,2)+M_PI*radio*generatriz;
			volumen = (M_PI*pow(radio,2)*altura)/3;
			cout << "" << endl;
			cout << "El volumen del cono es " << volumen  << endl;
			cout << "" << endl;
			cout << "El área del cono es " << area  << endl;
			break;
		case 4:
			cout << "Ingresa uno de los lados de la piramide" << endl;
			cin >> lado;
			cout << "Ingresa la altura de la pirámide " << endl;
			cin >> altura;
			area = lado*lado;
			volumen = (area*altura)/3;
			cout << "El volumen de la piramide es:" << volumen  << endl;
			cout << "EL area  de la piramide es :" << area  << endl;
			break;
		case 5:
			cout << "Ingresar el area de la base del prisma" << endl;
			cin >> abase;
			cout << "Ingresar la altura del prisma" << endl;
			cin >> altura;
			volumen = abase*altura;
			cout << "Ingresa uno de los lados del prisma" << endl;
			cin >> lado;
			cout << "Ingresa el apotema del prisma" << endl;
			cin >> apotema;
			perimetro = lado*5;
			area = (perimetro*apotema)/2;
			cout << "El volumen del prisma es: " << volumen << endl;
			cout << "El perimetro del prisma es: " << perimetro  << endl;
			cout << "El area del prisma es: " << area  << endl;
			break;
		case 6:
			cout << "Escribe radio mayor del cono truncado" << endl;
			cin >> radiomayor;
			cout << "Escribe radio menor del cono truncado" << endl;
			cin >> radiomenor;
			cout << "Escribe la altura del cono truncado" << endl;
			cin >> altura;
			generatriz = sqrtf(pow(altura,2)+pow((radiomayor-radiomenor),2));
			arealateral = (generatriz/M_PI*(radiomayor+radiomenor));
			volumen = 1/3*M_PI*altura*(pow(radiomayor,2)+pow(radiomenor,2)+radiomenor*radiomayor);
			generatriz = sqrtf(pow(altura,2)+pow((radiomayor-radiomenor),2));
			area = M_PI*(pow(radiomayor,2)+pow(radiomenor,2)+(radiomayor+radiomenor)*generatriz);
			cout << "El volumen del cono truncado es:" << volumen  << endl;
			cout << "El area lateral del cono truncado es:" << arealateral << endl;
			cout << "El area total del cono truncado es;" << area << endl;
			break;
		case 7:
			cout << " Escribe el perimetro de la base mayor del tronco piramidal" << endl;
			cin >> perimetrobasemayor;
			cout << "Escribe el perimetro de la base menor del tronco piramidal" << endl;
			cin >> perimetrobasemenor;
			cout << "Escribe la Altura de la piramide" << endl;
			cin >> altura;
			arealateral = (perimetrobasemayor+perimetrobasemenor/2)*altura;
			area = arealateral+perimetrobasemayor+perimetrobasemenor;
			volumen = (1/3*altura)*(perimetrobasemayor+perimetrobasemenor+sqrtf(perimetrobasemayor*perimetrobasemenor));
			cout << "El area lateral del tronco de la piramide es ;" << arealateral << endl;
			cout << "El area totalde la piramide es ;" << area << endl;
			cout << "El volumen del tronco de la piramide es;" << volumen << endl;
			break;
		case 8:
			cout << "Escribe la Arista de un Tetraedro " << endl;
			cin >> arista;
			area = pow(arista,2)*sqrtf(3);
			volumen = (sqrtf(2)/12)/pow(arista,3);
			altura = arista*(raiz6/3);
			cout << "El area de un tetaedro es;" << area << endl;
			cout << " el volumen un tetaedro es;" << volumen << endl;
			cout << "la altura deun tetaedro es ;" << altura << endl;
			break;
		case 9:
			cout << "Escribe la Arista de  un Hexaedro " << endl;
			cin >> arista;
			area = 6/pow(arista,2);
			volumen = pow(arista,3);
			diagonal = arista*3;
			cout << "El area de un hexaedro es;" << area << endl;
			cout << " el volumen un hexaedro es;" << volumen << endl;
			cout << "La diagonal de un hexaedro es;" << diagonal << endl;
			break;
		case 10:
			cout << "Escribe la Arista de un Octaedro" << endl;
			cin >> arista;
			area = 2*pow(arista,2)*(raiz3);
			volumen = (raiz2/3)*pow(arista,3);
			cout << "El area de un octaedro es;" << area << endl;
			cout << " el volumen du octaedro es;" << volumen << endl;
			break;
		case 11:
			cout << "Escribe la Arista de un Dodecaedro" << endl;
			cin >> arista;
			area = 3*pow(arista,2)*(sqrtf(25+10+(raiz5)));
			volumen = 1/4*15+7*raiz5*pow(arista,3);
			cout << "El area de un dodecaedro es;" << area << endl;
			cout << " el volumen del dodecaedro es;" << volumen << endl;
			break;
		case 12:
			cout << "Escribe la Arista de un Icosaedro " << endl;
			cin >> arista;
			volumen = 5/12*(3+raiz5)*pow(arista,3);
			area = 5*pow(arista,2)*raiz3;
			cout << " el volumen de un icosaedro es;" << volumen << endl;
			cout << "el area de un icosaedro es," << area << endl;
			break;
		case 0: cout << "fin del programa" << endl;
			break;
		default:
			cout << "" << endl;
			cout << "INGRESO UN VALOR INCORRECTO, DEBE DIGITAR 1, 2, 3 o 4" << endl;
		}
	} while (5+5!=0);
	return 0;
}

