#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a = 5, b = 2;
	double c = 9.0, d = 3.1415;
	
	int e = a % b;
	
	cout << "a + b = " << a + b << endl;
	cout << "a + -b = " << a + -b << endl;
	cout << "d - a = " << d - a << endl;
	cout << "c * b = " << c * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "c / b = " << c / b << endl;
	cout << "e = a % b = " <<  e << endl;
	
	system("pause");
	return 0;
}
