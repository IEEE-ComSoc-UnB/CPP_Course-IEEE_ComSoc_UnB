#include <iostream>
#include <clocale>
#include <string>
#include <list>

using namespace std;

int main(){
	
	size_t tamanho_max(0);
	list<string> strings_inseridas;
	string inserida, maior;
	
	do{
		cout << "Insira uma frase: " << endl;
		getline(cin,inserida);
		strings_inseridas.push_back(inserida);
	}while(strings_inseridas.back() != "");
	
	list<string>::iterator it;
	for(it = strings_inseridas.begin(); it != strings_inseridas.end(); it++){
		if((*it).size() > tamanho_max){
			tamanho_max = it->size();
			maior = *it;
		}
	}
	
	cout << "A maior frase inserida foi: " << maior << endl;
	
	return 0;
}
