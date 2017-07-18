#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	do{
		cout << "Insira o nuúmero 92!" << endl;
		cin >> num;
	}while(num != 92);
	
	system("Pause");
	return 0;
}

