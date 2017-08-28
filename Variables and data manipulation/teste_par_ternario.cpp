#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Informe um numero: ";
	cin >> num;
	
	cout << "O numero informado e " << (num%2 != 0 ? "impar":"par") << endl;
	
}
