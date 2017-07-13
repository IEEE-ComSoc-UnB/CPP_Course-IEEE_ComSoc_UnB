#include <iostream>

using namespace std;

int main()
{
	int lost[3] = {4, 8, 15};

	cout << "Valor da array e: " << lost << endl;
	cout << "O valor apontado e: " << *lost << endl;
	cout << "No proximo endereco encontra-se: " << *(lost + 1) << endl;
	cout << "E no seguinte: " << *(lost + 2) << endl;

	system("Pause");
	return 0;
}

