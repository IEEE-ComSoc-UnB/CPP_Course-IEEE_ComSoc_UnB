#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Numeros informados
	double a,b;
	// Resultado
	double res;
	
	// Receber dados
	cout << "Informe o número a: " << endl;
	cin >> a;
	cout << "Informe o número b: " << endl;
	cin >> b;
	
	// Calcular expressao
	res = 2*a + 3*a*b + 5;
	
	// Apresentar resultado
	cout << "2*a + 3*a*b + 5 = " << res << endl;
	
	system("pause");
	return 0;
}
