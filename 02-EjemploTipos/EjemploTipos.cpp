/*EjemploTipos
 *Se muestra un ejemplo básico del uso de cada tipo de dato visto.
 *LG
 *20180419
 */
#include <iostream>
#include <string>
using namespace std; 
int main() {
	int a = -8;
	cout << "Variable tipo entero: " << a;

	double b = 4.56;
	cout << "\nVariable tipo double: " << b;

	char c = 'j';
	char d[25] = "Dancing in september";
	cout << "\nVariable tipo char de un caracter: " << c;
	cout << "\nVariable tipo char de una cadena de caracteres: " << d;

	bool e = true;
	bool f = false;
	cout << "\nVariable tipo bool verdadera: " << e;
	cout << "\nVariable tipo bool falsa: " << f;

	string g = "Do you remember?";
	cout << "\nVariable de tipo string: " << g;
	cout << "\nLongitud del string: " << g.length();
	cout << "\nUltimo caracter del string de la variable string: " << g.substr(15, 16);

	unsigned int h = 71;
	cout << "\nValor unsigned de la variable: " << h<<"\n";
	
	system("pause");
}