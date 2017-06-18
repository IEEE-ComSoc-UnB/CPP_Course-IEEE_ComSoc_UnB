#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		O C++ oferece uma biblioteca especial de classes - chamada
		biblioteca de fluxos - para tratar das operações de entrada
		e saida em programas C++.
		Quando você inclui o arquivo de cabeçalho '<iostream>' em 
		um programa, o C++ cria, automaticamente, quatro objetos 
		para tratar das operações de entrada e saida.
		
		Tais objetos são:
		
		cin 	-> Corresponde ao fluxo de entrada padrão, que aceita entradas 
				   válidas de um teclado;
		cout 	-> Corresponde ao fluxo padrão de saida, que direciona a saida para 
				   a tela. 
		cerr	-> Corresponde ao fluxo de erro padrão. Você usa o objeto 'cerr' 
                   para alertar o usuário de alguma condição de exceção que ocorre 
				   no programa.
		clog	-> Corresponde ao fluxo padrão de erro que direciona a saida para a tela.
				   É basicamente um clone raramente usado de cerr, destinado a ser usado 
				   para registro.
	*/
	
    int Poder_do_Goku = 0;
    cout << "Por favor, diga logo qual é o poder de luta do kakaroto: ";
    cin  >> Poder_do_Goku;
    
    if (Poder_do_Goku < 8000)
	{
		   cerr << "O poder do Goku deve ser de mais de 8000!" << endl;	
	}
	else
	{
		   clog << "Isso deve ser um engano, esse aparelho deve estar quebrado!" << endl;	
	}
    
    
    return 0;       
}