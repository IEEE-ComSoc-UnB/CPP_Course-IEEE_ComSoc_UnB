#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double num;
	
	cout << "Informe um numero: ";
	cin >> num;
	
	while(num > 1){
		num = num/2;
		cout << num << endl;
	}	
	
	system("pause");
	return 0;
}

