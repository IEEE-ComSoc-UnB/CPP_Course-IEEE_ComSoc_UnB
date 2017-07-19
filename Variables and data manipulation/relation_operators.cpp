#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	bool t = true, f = false;
	
	cout << "Tabela verdade do operador &&" << endl;
	cout << "1 e 1: " << (t && t) <<endl;
	cout << "1 e 0: " << (t && f) <<endl;
	cout << "0 e 1: " << (f && t) <<endl;
	cout << "0 e 0: " << (f && f) <<endl;
	
	cout << "\nTabela verdade do operador ||" << endl;
	cout << "1 ou 1: " << (t || t) <<endl;
	cout << "1 ou 0: " << (t || f) <<endl;
	cout << "0 ou 1: " << (f || t) <<endl;
	cout << "0 ou 0: " << (f || f) <<endl;
	
	system("pause");
	return 0;
}
