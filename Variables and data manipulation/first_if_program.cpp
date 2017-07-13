#include <iostream>

using namespace std;

int main()
{
	double n1, n2, r;
	
	cout << "Informe o dividendo:";
	cin >> n1;
	
	cout << "Informe o divisor:";
	cin >> n2;
	
	if(n2 == 0) {
		clog << "Atencao! Divisao por zero!" << endl;
	}
	
	r = n1/n2;
	cout << n1 << " / " << n2 << " = " << r << endl;
	
	system("pause");
	return 0;
}

