#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	ifstream leitura;
	vector<double> numeros;
	double media(0),std_dev(0);
	
	// Limpar vetor: mais seguro!
	numeros.clear();
	
	leitura.open("numeros_interessantes.txt");
	
	// Ler numeros do arquivo
	while(!leitura.eof()){
		double num;
		leitura >> num;
		numeros.push_back(num);
	}
	
	// Calcular a media
	for(int k = 0; k < numeros.size(); k++){
		media += numeros[k];
	}
	media /= numeros.size();
	
	cout << "A media dos numeros e: " << media << endl;
	
	// Calcular o desvio padrao
	for(int k = 0; k < numeros.size(); k++){
		std_dev += pow((numeros[k]-media),2);
	}
	std_dev = sqrt(std_dev/(numeros.size()-1));
	
	cout << "O desvio padrao e: " << std_dev << endl;
	
	return 0;
}
