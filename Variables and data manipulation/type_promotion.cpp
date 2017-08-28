#include <iostream> 
using namespace std;

/*
	Codigo adaptado de:
	https://stackoverflow.com/questions/13663545/does-one-double-promote-every-int-in-the-equation-to-double
*/

int main(){

	int a(1), b(2), c(3);
	double d(4.);
	double result1 = a + b/d + c; // igual a 4 ou 4.5?
	double result2 = (a + b)/d + c; // igual a 3 ou 3.75? 
	double result3 = a/b + d; // igual a 4 ou 4.5?

	cout << "Resultado 1: " << result1 << endl;
	cout << "Resultado 2: " << result2 << endl;
	cout << "Resultado 3: " << result3 << endl;
	cout << "Tamanho de a + d: " << sizeof(a + d) << endl; // sera double ou int?
	cout << "Tamanho de a * d: " << sizeof(a * d) << endl; // sera double ou int?
	int e = a * d;
	cout << "Tamanho de e = a * d: " << sizeof(e) << endl; // sera double ou int?
	cout << "Tamanho de (double)e: " << sizeof((double)e) << endl; // sera double ou int?
	
	return 0;
}
