#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	bool t = true, f = false;
	
	cout << "Tabela verdade do operador &&" << endl;
	cout << "t e t: " << (t && t) <<endl;
	cout << "t e f: " << (t && f) <<endl;
	cout << "f e t: " << (f && t) <<endl;
	cout << "f e f: " << (f && f) <<endl;
	
	cout << "\nTabela verdade do operador ||" << endl;
	cout << "t e t: " << (t || t) <<endl;
	cout << "t e f: " << (t || f) <<endl;
	cout << "f e t: " << (f || t) <<endl;
	cout << "f e f: " << (f || f) <<endl;
	
	system("pause");
	return 0;
}
