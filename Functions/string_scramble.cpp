#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>

using namespace std;

string embaralhar(string);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	string aPalavra;
	
	cout << "Insira uma string: ";
	getline(cin,aPalavra);
	
	cout << aPalavra << " embaralhada é " << embaralhar(aPalavra);
	cout << endl;
	
	system("pause");
	return 0;
}

// Embaralhando a palavra
string embaralhar(string palavra) {	

	string embaralhada = palavra;
	// Definir tamanho da string de entrada
	int tamanho = embaralhada.length();
	
	for (int i = 0; i < tamanho; ++i )
	{
		int  index1 = (rand() % tamanho);
		int  index2 = (rand() % tamanho);
		swap(embaralhada[index1],embaralhada[index2]);
	}
	
	return embaralhada;
}
