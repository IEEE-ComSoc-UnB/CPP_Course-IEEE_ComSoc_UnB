#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	bool cond;
	
	cout << "Informe um número : ";
	cin >> num;

	cond = num > 0 && num <=10;
	
	if(cond) {
		cout << "O número é maior que 0 e menor ou igual a 10." << endl;
	} else {
		cout << "O numero nao é maior que 0 e menor ou igual a 10." << endl;
	}
	
	system("pause");
	return 0;
}

