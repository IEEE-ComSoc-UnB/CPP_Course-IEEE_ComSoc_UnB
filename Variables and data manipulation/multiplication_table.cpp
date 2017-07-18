#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	cout << "Informe um número: ";
	cin  >> num;
	
	for(int cnt = 1; cnt <= 10; cnt++) {
		cout << cnt << " x " << num << " = " << cnt*num << endl;
	}
	
	system("pause");
	return 0;
}

