#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double num;
	
	cout << "Informe um numero: ";
	cin >> num;
	
	if(num < 0) {
		cout << "O numero informado e negativo." << endl;
	} 
	else if(num == 0){
		cout << "O numero informado e zero." << endl;
	}
	else {
		cout << "O numero informado e positivo." << endl;
	}
	
	system("pause");
	return 0;
}

