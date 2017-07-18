#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	string p1 = "The Winter"; 			// Primeira forma de atribuição de string
	string p2(" is Coming");	   			// Segunda forma de atribuição de string
	string p3(3,'!');		   			// Terceira forma de atribuição de string
	
	string frase = p1 + p2 + p3;  //operador '+' concatena strings
	cout << "A frase é: " << frase << "\n\n";
	
	cout << "A frase tem " << frase.size() << " caracteres nela.\n\n";
	
	cout << "O caractere na posição 14 é: " << frase[14] << "\n\n";
	
	cout << "Vamos mudar o caractere da posição 14.\n";
	frase[14] = 'H';
	
	cout << "\nA frase agora é: " << frase << "\n\n";
	
	for(unsigned int i = 0; i < frase.size(); ++i) //Forma de iterar sobre string
	{
		cout << " Caractere na posição " << i << " é: " << frase[i] << endl;
		if (i==15)
		{
			frase[i] = 'e';
		}
		else if (i==16)
		{
			frase[i] = 'r';
		}
		else if (i==17)
		{
			frase[i] = 'e';
		}
	}
	cout << "\nA frase é agora: " << frase << endl;
	cout << "\nA sequência 'Winter' começaa na posição ";
	cout << frase.find("Winter") << endl;
	
	if(frase.find("Summer") == string::npos)
	{
		cout << "'Summer' não está na frase.\n\n";
	}
	
	frase.erase(0,4);
	cout << "A frase é agora: " << frase << endl;
	
	frase.erase(14);
	cout << "A frase é agora: " << frase << "!!!" << endl;

	
	frase.erase();
	cout << "A frase é agora: " << frase << endl;
	
	if(frase.empty())
	{
		cout << "\nA frase está vazia.\n";
	}
	
	
	return 0;
}
