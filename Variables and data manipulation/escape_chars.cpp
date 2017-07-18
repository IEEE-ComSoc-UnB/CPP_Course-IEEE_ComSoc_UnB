#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Bob\'s" << endl;
	cout << "\"We are the chanpions.\"" << endl;
	cout << "Matrícula: 13\\123456" << endl;
	cout << "Null \0 char" << endl;
	cout << "Bell \a" << endl;
	cout << "Backspace\b" << endl;
	cout << "Texto texto texto \f mais texto" << endl; // Somente para sistemas antigos
	cout << "Linha \n Nova linha." << endl;
	cout << "Texto \r mais texto." << endl;
	cout << "Tab \t horizontal" << endl;
	cout << "Tab \v vertical" << endl;
	cout << "Número hexadecimal: " << "\x015" << endl;
	
	system("Pause");
	return 0;
}
