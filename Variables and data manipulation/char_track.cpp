#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	char ch = 'a';
	
	cout << "O char ch tem, primeiramente, o valor de : " << ch << endl;
	
	ch = 'b';
	cout << "Depois o valor passa a ser: " << ch << endl;
	
	ch = 'B';
	cout << "E, por último, ele fica com o valor de: " << ch << endl;
	
	system("pause");
}

