#include <iostream>

using namespace std;

int main()
{
	int num, res;
	
	cout << "Informe um numero :";
	cin >> num;
	
	res = num % 2;
	
	if(res == 0) {
		cout << "O numero e par." << endl;
	} 
	else {
		cout << "O numero e impar." << endl;
	}
	
	system("pause");
	return 0;
}

