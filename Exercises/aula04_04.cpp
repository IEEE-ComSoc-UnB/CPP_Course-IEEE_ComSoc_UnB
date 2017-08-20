#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declarar variaveis
	int max = 100, primos = 0;
	
	// Levantamento do numero de primos
	for(int k = 2; k <= max; k++){
		int cont = 1;
		do {
			cont++;
			if(cont == k) primos++;
		}while(k%cont != 0); // Sair do loop caso ache um divisor
	}
	
	// Apresentar resultados
	cout << primos << " primos entre 1 e " << max << endl;
	cout << "Densidade de " << (double)primos/max << endl;
	
	// Repetir para 1000
	max = 1000, primos = 0;
	
	// Levantamento do numero de primos
	for(int k = 2; k <= max; k++){
		int cont = 1;
		do {
			cont++;
			if(cont == k) primos++;
		}while(k%cont != 0); // Sair do loop caso ache um divisor
	}
	
	// Apresentar resultados
	cout << primos << " primos entre 1 e " << max << endl;
	cout << "Densidade de " << (double)primos/max << endl;
	
	// Repetir para 10000
	max = 10000, primos = 0;
	
	// Levantamento do numero de primos
	for(int k = 2; k <= max; k++){
		int cont = 1;
		do {
			cont++;
			if(cont == k) primos++;
		}while(k%cont != 0); // Sair do loop caso ache um divisor
	}
	
	// Apresentar resultados
	cout << primos << " primos entre 1 e " << max << endl;
	cout << "Densidade de " << (double)primos/max << endl;
	
	system("pause");
	return 0;
}
