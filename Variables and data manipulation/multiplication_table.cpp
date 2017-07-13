#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cout << "Informe um numero: ";
	cin  >> num;
	
	for(int cnt = 1; cnt <= 10; cnt++) {
		cout << cnt << " x " << num << " = " << cnt*num << endl;
	}
	
	system("pause");
	return 0;
}

