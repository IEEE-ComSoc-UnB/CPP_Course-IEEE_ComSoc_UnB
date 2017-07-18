#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	double n1, n2, r;
	
	cout << "Informe o dividendo:";
	cin >> n1;
	
	cout << "Informe o divisor:";
	cin >> n2;
	
	if(n2 == 0) {
		clog << "Atenção! Divisão por zero!" << endl;
	}
	
	r = n1/n2;
	cout << n1 << " / " << n2 << " = " << r << endl;
	
	system("pause");
	return 0;
}

