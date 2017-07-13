#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double num, res;
	
	cout << "Informe um numero :";
	cin >> num;
	
	cout << "A raiz de " << num << " e igual a ";
	if(num >= 0) {
		res = sqrt(num);
		cout << res << endl;
	} 
	else {
		res = sqrt(abs(num));
		cout << res << "i" << endl;
	}
	
	system("pause");
	return 0;
}

