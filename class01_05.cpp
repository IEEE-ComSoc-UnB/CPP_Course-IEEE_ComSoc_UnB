//#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int val = 5;
	
	cout << "O valor é: " << val << endl;
	
	system("pause");
	return 0;
}
