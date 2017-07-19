#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	double b = 11.25, c = 10.0;
	
	cout << "a > b : " << (a > b) << endl;
	cout << "a < b : " << (a < b) << endl;
	cout << "a <= b : " << (a <= b) << endl;
	cout << "a >= c : " << (a >= c) << endl;
	cout << "a == c : " << (a == c) << endl;
	cout << "a != c : " << (a != c) << endl;
	
	system("pause");
	return 0;
}
