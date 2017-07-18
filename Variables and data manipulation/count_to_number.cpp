#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int max;
	
	cout << "Informe um número: ";
	cin  >> max;
	
	for(int cnt = 0; cnt <= max; cnt++) {
		cout << cnt << "	";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

