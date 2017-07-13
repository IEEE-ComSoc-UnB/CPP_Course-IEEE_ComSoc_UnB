#include <iostream>

using namespace std;

int main()
{
	int num;
	unsigned int dig = 1;
	
	cout << "Informe um numero: ";
	cin >> num;
	
	while(num > 9){
		num = num/10;
		dig++;
	}
	
	cout << "O numero tem " << dig << " digitos." << endl;
	
	system("pause");
	return 0;
}

