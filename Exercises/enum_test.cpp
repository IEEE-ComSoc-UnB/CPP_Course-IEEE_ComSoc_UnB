#include <iostream>

using namespace std;

enum cores{
	VERMELHO,
	VERDE,
	AZUL
};

int main(){
	
	cout << VERMELHO + AZUL << endl;
	
	if('a' < 'b'){
		cout << "HEY!" << endl;
	}
	
	system("pause");
	return 0;
}
