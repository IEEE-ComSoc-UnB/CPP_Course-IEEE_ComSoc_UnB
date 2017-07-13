#include <string>
#include <iostream>
#include "data2.h"

using namespace std;

class Pessoa {
	private:
		string nome;
		Data nascimento;
		
	public:
		Pessoa(string& nm, int dia, int mes, int ano){
			nome = nm;
			nascimento = Data(dia,mes,ano);
		}
		void print_nascimento(){
			nascimento.print();
		}
};

