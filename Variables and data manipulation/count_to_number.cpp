#include <iostream>

using namespace std;

int main()
{
	int max;
	
	cout << "Informe um numero: ";
	cin  >> max;
	
	for(int cnt = 0; cnt <= max; cnt++) {
		cout << cnt << "	";
	}
	cout << endl;
	
	system("pause");
	return 0;
}

