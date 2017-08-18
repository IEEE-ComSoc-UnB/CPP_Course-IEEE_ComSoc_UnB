#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	int num;
	
	// Receber input
	cout << "Informe um número: " << endl;
	cin >> num;
	
	// Mostrar resultado
	cout << num << " mod 3 = " << num%3 << endl;
	
	system("pause");
	return 0;
}
