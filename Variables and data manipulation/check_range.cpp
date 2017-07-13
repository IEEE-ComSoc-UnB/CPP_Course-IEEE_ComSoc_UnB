#include <iostream>

using namespace std;

int main()
{
	int num;
	bool cond;
	
	cout << "Informe um numero :";
	cin >> num;

	cond = num > 0 && num <=10;
	
	if(cond) {
		cout << "O numero e maior que 0 e menor ou igual a 10." << endl;
	} else {
		cout << "O numero nao e maior que 0 e menor ou igual a 10." << endl;
	}
	
	system("pause");
	return 0
}

