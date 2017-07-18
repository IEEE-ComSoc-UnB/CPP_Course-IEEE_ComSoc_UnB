#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double num;
	
	cout << "Informe um número: ";
	cin >> num;
	
	if(num < 0) {
		cout << "O número informado é negativo." << endl;
	} 
	else if(num == 0){
		cout << "O número informado é zero." << endl;
	}
	else {
		cout << "O número informado é positivo." << endl;
	}
	
	system("pause");
	return 0;
}

