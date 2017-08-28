#include <iostream> 

using namespace std;

namespace first
{
	int um_numero = 5;
}

namespace second
{
	int um_numero = 10;
}

int main ()
{
	{
		using namespace first;
		cout<<second::um_numero<<endl;	//deve imprimir o valor 10
		cout << um_numero << endl;			// deve imprimir o valor 5
	}
	{
		using first::um_numero;
		std::cout<<um_numero<<std::endl;	//deve imprimir o valor 5
	}
	
	std::cout<<second::um_numero <<std::endl;	//deve imprimir o valor 10
	
	return 0;
}

