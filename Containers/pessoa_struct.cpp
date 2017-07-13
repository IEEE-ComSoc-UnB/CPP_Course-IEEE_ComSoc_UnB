#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
	string nome;
	int idade;
	float altura;
	float peso;
};

int main()
{
	Pessoa p1 = {"Jack",23,1.73,75.5};
	
	cout << p1.nome << " tem " << p1.idade << " anos de idade, "
		<< p1.altura << "m de altura e pesa " << p1.peso << "kg"
		<< endl;
	
	system("pause");
	return 0;
}

