#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>


using namespace std;

class Caixa{
	public:
		int altura,largura;
		void setAltura(int );
		void setLargura(int);
	
};

void Caixa::setAltura(int altura)
{
	this->altura = altura;
}
void Caixa::setLargura(int largura)
{
	this->largura = largura;
}

class CaixaColorida : public Caixa{
	public:
		string cor;
		void setCor(string);
	
};

void CaixaColorida::setCor(string cor)
{
	this->cor = cor;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
    /*
		A classe derivada herda membros de dados e funções de membro de sua class-base.
		A classe derivada pode também ter seus próprios membros de dados e funções de 
		membro.
		A herança permite a reutilização de código. Quando uma classe é definida, você
		pode us-la para criar classes derivadas. A reutilização de classes existentes 
		poupa tempo e trabalho.
		
		Quando você deriva uma classe de apenas uma classe-base, a hrança é conhecida como
		herança única. Existem dois tipos de herança única: 
			A pública:
				Membros públicos e protegidos da classe-base se tornam membros públicos e 
				protegidos da classe derivada.
				
			A privada:
				Membros públicos e protegidos da classe-base se tornam membros privados da
				 classe derivada.
				 
       Classe base também é denominada de superclasse
       Classe derivada também é denominada de  subclasse
				
	*/
	CaixaColorida c1;
	c1.setCor("Vermelha");
	c1.setLargura(10); 	//Herdada
	c1.setAltura(20);  	//Herdada
	
	
	return 0;
}
