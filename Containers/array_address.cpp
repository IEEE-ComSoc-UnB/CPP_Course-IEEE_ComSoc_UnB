#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int lost[3] = {4, 8, 15};

	cout << "Valor da array é: " << lost << endl;
	cout << "O endereço do elemento 0 é: " << &lost[0] << endl;
	cout << "O endereço do elemento 1 é: " << &lost[1] << endl;
	cout << "O endereço do elemento 2 é: " << &lost[2] << endl;

	system("Pause");
	return 0;
}

