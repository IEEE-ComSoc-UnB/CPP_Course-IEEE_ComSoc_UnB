#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{
	Pessoa p1;
	
	cout << "Informe o nome: ";
	cin >> p1.nome;
	
	cout << "Informe a idade: ";
	cin >> p1.idade;
	p1.altura = 1.70;
	
	cout << p1.nome << " tem " << p1.idade 
	<< " anos de idade, “ << p1.altura 
	<< "m de altura e pesa " << p1.peso 
	<< "kg" << endl;

	
	system("pause");
	return 0;
}

