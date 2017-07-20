#include <iostream>
#include <locale>

using namespace std;

int factorial(int);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int k;
	
	// Receber numero do usuario
	cout << "Informe um número: ";
	cin >> k;
	
	// Imprimir fatorial na tela
	cout << k << "! = " << factorial(k) << endl;
	
	system("pause");
	return 0;
}

int factorial(int num){
	if(num > 0) {
		// k! = k*(k-1)!
		return num*factorial(num - 1);
	}
	else{
		// 0! = 1
		return 1;
	}
}
