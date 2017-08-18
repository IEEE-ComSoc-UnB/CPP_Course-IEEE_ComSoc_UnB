#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	double celcius, fahrenheit;
	
	// Receber valor
	cout << "Insira a temperatura em Celcius: ";
	cin >> celcius;
	
	// Converter
	fahrenheit = 1.8*celcius + 32.0;
	
	// Mostrar resultado
	cout << celcius << "\xB0" << "C = " << fahrenheit << "\xB0" << "F" << endl;
	
	system("pause");
	return 0;
}
