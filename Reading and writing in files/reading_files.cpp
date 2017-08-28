#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>
#include <cctype>

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
	string linha;
	char letra('a');
	ifstream leitura;
	// Abrir arquivo!
	leitura.open("numeros.txt");
	//leitura.open("./files/numeros.txt");
	//leitura.open("../numeros.txt");
	//leitura.open("C:\\Users\\Calil\\Desktop\\numeros.txt");
	double arr[4];
	
	// Caso o arquivo nao exista: 
	if(!leitura.is_open( )) 
	{
	cout<<"Não foi possível abrir arquivo! Programa será terminado!\n";
	}
	
	// Imprimir linha por linha
	while(getline(leitura,linha)){
		cout << linha << endl;
	}
	
	// Testar se o arquivo foi concluido
	if(leitura.eof()){
		cout << "Cheguei no final!" << endl;
	}
	
	// Imprimir letra por letra: nao vai funcionar!
	while(leitura.get(letra)){
		cout << letra << endl;
	}
	
	// Reset nas flags: fail ou eof
	leitura.clear();
	// Ir para posicao inicial
	leitura.seekg(0);
	
	cout << endl;
	// Iterar ate o primeiro numero
	while(linha.find(":") == string::npos){
		getline(leitura,linha);
	}
	
	// Armazenar numeros em array
	double valor;
	unsigned int idx(0);
	while(leitura >> valor && idx < 4){
		arr[idx] = valor;
		cout << arr[idx] << "	";
		idx++;
	}
	
	// É mais seguro fechar o arquivo explicitamente!
	leitura.close();
	
	return 0;     
}

