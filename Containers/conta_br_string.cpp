#include <iostream>
#include <string> 
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	//verifica quantas veze a palavra oi apareceu na frase digitada pelo usuário
	string str = "";
	string to_find ="br";
	int count_founds(0);
	cout<<"Insira uma frase para verificar a ocorrência da palavra: "<<to_find<<endl;
	//Função getline para pegar toda a stream digitada (mesmo que tenha caracteres de término , como o espaço em branco)
	getline(cin,str); 
	
	//Bloco de instrução para verificar a ocorrência da palavra 'br' na string
	size_t found = str.find(to_find); //retorna o índice onde o primeiro 'oi' foi encontrado
	while(found != string::npos){
		found = str.find(to_find,found +1); //tenta encontrar outro 'br', começando da posição do primeiro 'oi' +1
		count_founds++;	
	}
	
	cout<<"A palavra "<<to_find <<" apareceu "<<count_founds<<" vezes.\n";
	
	system("pause");
	return 0;	
}
