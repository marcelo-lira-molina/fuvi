// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float n;
	float suma;
	int total;
	int x;
	cout << "Cuantos numeros deseas sumar" << endl;
	cin >> total;
	x = 1;
	suma = 0;
	while (x<=total) {
		cout << "Ingresa un numero " << endl;
		cin >> n;
		suma = suma+n;
		x = x+1;
	}
	cout << "La suma de los " << total << " numeros es: " << suma << endl;
	return 0;
}

