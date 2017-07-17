#include <iostream> 
#include "a.h"
#include "b.h"

/*int main (){
	doSomething(5);
}*/

int main (){
	{
		using namespace first;
		second::doSomething(5);
	}
	std::cout<< std::endl;
	second::doSomething(5);
}


