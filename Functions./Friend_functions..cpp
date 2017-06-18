#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		Uma função friend é usada para acessar todos os membros
		da classe á qual a função tenha sido declarada como amiga.
		
		Às vezes, uma função pode precisar acessar duas classes separadas.
		Em C++, uma função pode acessar as duas classses, mesmo que ela não seja
		membro de nenhuma das classes. Você faz isso ao declarar tal função como
		uma amiga das classes que ela deseja acessar.
		
		Uma função friend pode ser:
			* Uma função que não é membro.
			* Uma função de membro de uma classe definida
			  anteriormente.
			* Uma classe inteira.			 		 
	*/
	 
	 class Veiculo;
	 // declare a classe friend existente
	 class Onibus
	 {
	 	private:
	 		friend class Veiculo;
	 }; 
	 class Veiculo
	 {
		 public:
		 	//...
	 };
	 
	 
	 
	     
    return 0;       
}
