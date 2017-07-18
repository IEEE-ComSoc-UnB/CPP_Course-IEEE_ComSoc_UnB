#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	cout << "Informe um número :";
	cin >> num;
	
	if(num >= 0) {
		cout << "O número é positivo ou zero." << endl;
	} 
	else {
		cout << "O número é negativo." << endl;
	}
	
	system("pause");
	return 0;
}

