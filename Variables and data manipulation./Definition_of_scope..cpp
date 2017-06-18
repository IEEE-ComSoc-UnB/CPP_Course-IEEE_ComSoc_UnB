#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Escopo é a parte de um programa onde uma determinada variável
		é acessada. Uma variável tem um escopo associado que, juntamente
		com o nome da variável, identifica a variável de forma única.
		
		O escopo de uma variável se estende entre o ponto de declaração da
		variável e a chave de fechamento mais próxima dentro da qual a variável
		é declarada.
		
		 		 
	*/
	
    int v1;
	{
		int v2;
		//v1 e v2 são válidos aqui
		{
			int v3;
			//v1, v2 e v3 são válidos aqui 
		}
		//v1 e v2 são válidos aqui, mas v3 não é.
	}
	//somente v1 é válido aqui   	
    
    
    
    return 0;       
}