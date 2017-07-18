#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	unsigned int dig = 1;
	
	cout << "Informe um número: ";
	cin >> num;
	
	while(num > 9){
		num = num/10;
		dig++;
	}
	
	cout << "O número tem " << dig << " dígitos." << endl;
	
	system("pause");
	return 0;
}

