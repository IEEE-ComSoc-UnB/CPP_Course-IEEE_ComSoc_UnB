#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	clog << "Isso aqui vai ser impresso no console." << endl;
	cerr << "Isso também." << endl;
	
	system("pause");
}

