#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num, res;
	
	cout << "Informe um número : ";
	cin >> num;
	
	res = num % 2;
	
	if(res == 0) {
		cout << "O número é par." << endl;
	} 
	else {
		cout << "O número é ímpar." << endl;
	}
	
	system("pause");
	return 0;
}

