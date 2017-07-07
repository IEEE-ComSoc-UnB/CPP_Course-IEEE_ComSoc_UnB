#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Para conectar um arquivo ao programa para entrada e saida você precisa
		incluir o arquivo de cabeçalho fstream em seu programa.
		
		A função open() é usada para abrir um arquivo em modo especificado. Você
		pode então concectar o arquivo ao objeto de classe usando a função open()
		Uso:
			open(nome_do_arquivo, modo)
			
		A função close() é usada para desconectar explicitamente um arquivo de um programa.
		 	
	*/
	char letra;
	ifstream leitura;
	leitura.open("batata.txt");
	
	if(!leitura.is_open( )) 
	{
	cout<<"Não foi possível abrir arquivo! Programa será terminado!\n";
	leitura.clear( ); //reseta o objeto leitura, para limpar memória do sistema}
	}
	
	while (leitura.get(letra)) {cout << letra;}
	leitura.close();
	
	return 0;     
}

