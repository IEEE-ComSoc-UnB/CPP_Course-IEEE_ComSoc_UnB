#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int v = 0;
	
	do{
		v++;
		cout << "O valor de v é: " << v << endl;
	}while(v <= 10 && v != 0);
	
   system("Pause");
   return 0;
}

