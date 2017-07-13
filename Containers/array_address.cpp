#include <iostream>

using namespace std;

int main()
{
	int lost[3] = {4, 8, 15};

	cout << "Valor da array e: " << lost << endl;
	cout << "O endereco do elemento 0 e: " << &lost[0] << endl;
	cout << "O endereco do elemento 1 e: " << &lost[1] << endl;
	cout << "O endereco do elemento 2 e: " << &lost[2] << endl;

	system("Pause");
	return 0;
}

