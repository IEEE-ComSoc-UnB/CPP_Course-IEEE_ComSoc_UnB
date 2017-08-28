#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	string frase;
	
	cout<<"Escreva uma frase para ser escrita no arquivo batata.txt:";
	getline(cin, frase);
	
	cout<<"Obrigado. Escrevendo dados no arquivo strings.txt...\n";
	ofstream escreve;
	escreve.open("batata.txt");
	
	escreve << "Utilizamos os objetos ofstream para escrever em arquivos\n";
	escreve<< "Note que podemos utilizar os caracteres \\n pra quebrar a linha, como fazemos em cout\n";
	int numero = 100;
	escreve<<"Podemos escrever o valor de variaveis numericas: " <<numero <<"\n";
	int matriz[3] = {42, 19, 99};
	escreve<<"Podemos tambem escrever arrays!";
	
	for (int i=0; i < 3; i++)
	{
		escreve.width(6);
		escreve<<matriz[i]<<" ";
	}
	
	escreve<<"\n";
	escreve<<"Finalmente, podemos receber dados via cin e escrever estes dados no arquivo!\n";
	escreve<<"A frase que você digitou durante a execucao do programa: "<<frase<<"\n";
	
	escreve.close();
	
	cout<<"Dados escritos no arquivo. Fim do Programa!";
	
	return 0;
}
