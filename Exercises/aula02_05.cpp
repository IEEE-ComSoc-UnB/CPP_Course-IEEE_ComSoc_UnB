#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	int a,b;
	// Variavel temporaria
	int temp;
	
	// Receber dados
	cout << "Insira o valor de a: ";
	cin >> a;
	cout << "Insira o valor de b: ";
	cin >> b;
	
	// Trocar valores
	temp = a;
	a = b;
	b = temp;
	
	// Apresentar na tela
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
}
