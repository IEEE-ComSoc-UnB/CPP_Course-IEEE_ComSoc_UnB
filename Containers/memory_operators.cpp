#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int k = 42;
	
	cout << "O valor de k é: " << k << endl;
	cout << "O endereço de k é: " << &k << endl;
	cout << "O valor contido no endereço de k é: " << *(&k) << endl;
	
	system("Pause");
	return 0;
}

