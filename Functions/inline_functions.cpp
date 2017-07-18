#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
int somar(int, int);

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Uma função inline é usada para reduzir a sobrecarga das chamadas de funções.
		Uma chamada de função envolve uma sobrecarga em termos do tempo levado para se
		executar algumas etapas adicionais necessárias para sua realização. 
		
		Quando você declara uma função como inline, o corpo da função é expandido no 
		ponto em que é invocada. Ela não é compilada como um pedaço separado do código.
		O código da função é inserido sempre que uma chamada dessa função é criada.
				 		 
	*/
	int a,b,c,d,r,s;
	r = somar(a,b);
	s = somar(c,d);
	
	/*
       Todas as vezes que a função somar() é invocada, o código da função é incluído no
       progama chamador main().
	   O programa main() é interpretado, do ponto de vista do compilador, como mostra 
	   o código abaixo:
	   
	   void main()
	   {
		   int a,b,c,d,r,s;
		   r = a + b;
		   s = c + d;
		}
	   
	   	
	*/     
    return 0;       
}

inline int somar(int x, int y){
		return x + y;
	}
