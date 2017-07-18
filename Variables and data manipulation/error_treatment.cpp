#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double num, den, res;
	
	cout << "Informe o numerador: ";
	cin >> num;
	
	cout << "Informe o denominador: ";
	cin >> den;
	
	while(den == 0){
		cout << "O denominador não pode ser igual a zero!" << endl;
		cout << "Informe o denominador: ";
		cin >> den;
	}
	
	res = num/den;
	
	cout << num << " / " << den << " = " << res << endl;
	
	system("Pause");
	return 0;
}

