#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double nota;
	
	cout << "Informe a nota do aluno: ";
	cin >> nota;
	
	cout << "A mencao e ";
	if(nota == 0) {
		cout << "SR." << endl;
	} 
	else if(nota < 3.0){
		cout << "SR." << endl;
	} 
	else if(nota < 5.0) {
		cout << "MI." << endl;
	}
	else if(nota < 7.0) {
		cout << "MM." << endl;
	}
	else if(nota < 9.0) {
		cout << "MS." << endl;
	}
	else if(nota <= 10.0) {
		cout << "SS." << endl;
	}
	else {
		cout << "Nota maior do que 10!“; 	}
	
	system("pause");
	return 0;
}

