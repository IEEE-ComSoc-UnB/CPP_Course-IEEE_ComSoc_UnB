#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	// Inicializando vetor com array
	string mencao_atual = "";
	string init_array[7] = {"SR", "II", "MI", "MM", "MS", "SS", ""};
	vector<string> mencoes_validas(init_array, init_array + sizeof(init_array) / sizeof(init_array[0]));
	vector<string> mencoes;
	
	do{
		cout << "Insira uma mencao: ";
		getline(cin,mencao_atual);
		while(find(mencoes_validas.begin(),mencoes_validas.end(),mencao_atual) == mencoes_validas.end()){
			cout << "Mencao invalida. Insira novamente: ";
			getline(cin,mencao_atual);
		}
		mencoes.push_back(mencao_atual);
	}while(mencao_atual != "");
	
	return 0;
}
