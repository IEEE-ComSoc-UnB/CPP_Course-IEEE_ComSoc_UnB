#include <string>
#include <vector>
#include <algorithm> // Funcao find()
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string mencao_atual = "";
	// Inicializando vetor com array
	string init_array_1[7] = {"SR", "II", "MI", "MM", "MS", "SS", ""};
	vector<string> mencoes_validas(init_array_1, init_array_1 + sizeof(init_array_1) / sizeof(init_array_1[0]));
	// Inicializando vetor com array
	string init_array_2[7] = {"SR", "II", "MI"};
	vector<string> reprovacao(init_array_2, init_array_2 + sizeof(init_array_2) / sizeof(init_array_2[0]));
	unsigned int reprovados(0);
	vector<string> mencoes;
	
	do{
		cout << "Insira uma mencao: ";
		getline(cin,mencao_atual);
		// Testar se mencao e invalida
		while(find(mencoes_validas.begin(),mencoes_validas.end(),mencao_atual) == mencoes_validas.end()){
			cout << "Mencao invalida. Insira novamente: ";
			getline(cin,mencao_atual);
		}
		// Caso nao seja uma string vazia:
		if(mencao_atual != "") {
			mencoes.push_back(mencao_atual); // Armazenar valor
			// Testar reprovacao
			if(find(reprovacao.begin(),reprovacao.end(),mencao_atual) != reprovacao.end()){
				reprovados++;
			}
		}
	}while(mencao_atual != "");
	
	// Escrever em arquivo
	ofstream escrita;
	escrita.open("resultado.txt");
	
	escrita << "As mencoes sao:\n\n";
	for(int k = 0; k < mencoes.size(); k++){
		escrita << mencoes[k] << '\n';
	}
	escrita << "Reprovados: " << reprovados << endl;
	escrita << "O indice de reprovacao e: " << (double)reprovados/mencoes.size() << endl;
	
	return 0;
}
