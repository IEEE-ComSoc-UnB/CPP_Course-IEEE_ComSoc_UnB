#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL,"Portguese");	
   unsigned int num;
	
   string nomes[10] = {"Bruno Rezende", 
	"Isac Santos", 
	"Eder Carbonera", 
	"Wallace de Souza",
	"Sidnei Junior",
	"Leandro Neves",
	"William Arjona",
	"Murilo Endres",
	"Raphael Vieira",
	"Sergio Santos"};
	
   cout << "Indique o número da camisa: ";
   cin >> num;
	
   while(num > 10) {
	cout << "O número informado é maior do que 10!" << endl;
	cout << "Indique o número da camisa: ";
	cin >> num;
   }

   cout << "O jogador de camisa " << num << " é o " << nomes[num] << endl;
	
   system("Pause");
   return 0;
}

