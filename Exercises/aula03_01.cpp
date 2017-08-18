#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	char c1, c2;
	
	// Receber dados
	cout << "Informe um caracter: ";
	cin >> c1;
	cout << "Informe outro caracter: ";
	cin >> c2;
	
	// Apresentar resultados
	cout << "Os caracteres em ordem alfabetica são: ";
	if(c1 < c2){
		cout << c1 << ", " << c2 << endl;
	} else {
		cout << c2 << ", " << c1 << endl;
	}
	
	system("pause");
	return 0;
}
