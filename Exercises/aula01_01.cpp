#include <iostream>

using namespace std;

int main(){
	// declaracao de enumerador
	enum en1{
		item0,
		item1,
		item2 = 6,
		item3,
		item4 = 15
	};
	
	// Imprimir valores na tela
	cout << "O item 0 tem valor: " << item0 << endl;
	cout << "O item 1 tem valor: " << item1 << endl;
	cout << "O item 2 tem valor: " << item2 << endl;
	cout << "O item 3 tem valor: " << item3 << endl;
	cout << "O item 4 tem valor: " << item4 << endl;
	
	// Concluir o programa
	system("pause");
	return 0;
}
