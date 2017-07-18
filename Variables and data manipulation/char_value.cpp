#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	char ch = 'a';
	
	cout << "O char ch tem, primeiramente, o valor de : " << ch << endl;
	
	cout << "Informe o novo valor de ch: ";
	cin >> ch;
	
	cout << "O character informado pelo usuário foi: " << ch << endl;
	
	system("pause");
}

