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
	float numero1;
	float numero2;
	float numero3;
	float resultado;
	cout << " producto o suma de numeros" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	cout << "Introduce el tercer numero" << endl;
	cin >> numero3;
	if ((numero1<0)) {
		resultado = numero1*numero2*numero3;
	} else {
		resultado = numero1+numero2+numero3;
	}
	cout << resultado << endl;
	return 0;
}

