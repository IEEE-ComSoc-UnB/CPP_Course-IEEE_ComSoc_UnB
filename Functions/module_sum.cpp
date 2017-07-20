#include <iostream>
#include <locale>

using namespace std;

int modulo_sum(int,int,int);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, mod, res;
	
	cout << "Informe o primeiro número: ";
	cin >> num1;
	cout << "Informe o segundo número: ";
	cin >> num2;
	cout << "Informe o modulo: ";
	cin >> mod;
	
	res = modulo_sum(num1,num2,mod);
	cout << num1 << "+" << num2 << "mod"<< mod << " = " << res << endl;
	
	system("pause");
	return 0;
}

int modulo_sum(int a, int b, int n){
	return (a + b)%n;
}
