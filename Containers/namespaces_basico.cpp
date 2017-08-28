#include <iostream> 

double valor_produto(10);    // Valor em dolares
double valor_produto(31.60); // Valor em reais

int main ()
{	
	/*
	Como nao adicionamos:
	using namespace std
	Devemos escrever std::cout e std::endl
	*/
	std::cout<< valor_produto <<std::endl;
	
	return 0;
}

