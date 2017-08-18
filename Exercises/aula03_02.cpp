#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declarando variaveis
	double num, res;
	
	// Receber input
	cout << "Informe um número: ";
	cin >> num;
	
	// Calcular expressao
	res = sqrt(abs(num));
	
	// Imprimir resultado
	cout << "sqrt(" << num << ") = ";
	if(num >= 0){
		cout << res << endl;
	}else{
		cout << res << "i" << endl;
	}
	
	system("pause");
	return 0;
}
