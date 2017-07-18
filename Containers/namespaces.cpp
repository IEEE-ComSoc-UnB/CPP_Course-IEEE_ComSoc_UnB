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
	{
		using first::doSomething;
		doSomething(5);
	}
	second::doSomething(5);
	
	return 0;
}


