#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
   int v = 0;
	
   while(v <= 10 && v != 0){
	v++;
	cout << "O valor de v é: " << v << endl;
   };
	
   system("Pause");
   return 0;
}

