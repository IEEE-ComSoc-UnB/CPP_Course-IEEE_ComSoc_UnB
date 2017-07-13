#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cout << "Informe um numero :";
	cin >> num;
	
	if(num >= 0) {
		cout << "O numero e positivo ou zero." << endl;
	} 
	else {
		cout << "O numero e negativo." << endl;
	}
	
	system("pause");
	return 0;
}

