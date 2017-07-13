#include <iostream>

using namespace std;

int main()
{
	double num, den, res;
	
	cout << "Informe o numerador: ";
	cin >> num;
	
	cout << "Informe o denominador: ";
	cin >> den;
	
	while(den == 0){
		cout << "O denominador nao pode ser igual a zero!" << endl;
		cout << "Informe o denominador: ";
		cin >> den;
	}
	
	res = num/den;
	
	cout << num << " / " << den << " = " << res << endl;
	
	system("Pause");
	return 0;
}

