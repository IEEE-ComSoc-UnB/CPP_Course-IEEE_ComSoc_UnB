#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	int num1, num2;
	
	// Recebe input
	cout << "Informe um número: ";
	cin >> num1;
	cout << "Informe outro número: ";
	cin >> num2;
	
	// Apresentar resultado
	if(num2%num1 == 0){
		cout << num2 << " é divisível por " << num1 << endl;
	} else{
		cout << num2 << " não é divisível por " << num1 << endl;
	}
	
	system("pause");
	return 0;
}
