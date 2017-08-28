#include <iostream>

using namespace std;

int main(){
	
	char ch('A');
	
	while(ch != 'S' && ch != 'N'){	
		cout << "Deseja salvar? S/N" << endl;
		cin >> ch;
		ch = toupper(ch);
	}
	
	if(ch == 'S') cout << "Jogo salvo!" << endl;
	
	return 0;
}
