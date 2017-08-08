#include <iostream> 
#include "a.h"
#include "b.h"

/*
int main ()
{	
	std::cout<<um_numero <<std::endl;
}*/


int main ()
{
	{
		using namespace first;
		std::cout<<second::um_numero<<std::endl;	//deve printar o valor 10
	}
	{
		using first::um_numero;
		std::cout<<um_numero<<std::endl;	//deve printar o valor 5
	}
	std::cout<<second::um_numero <<std::endl;	//deve printar o valor 10
	
	return 0;
}


