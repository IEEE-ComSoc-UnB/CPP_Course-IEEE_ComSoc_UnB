#include <string>
#include <iostream>

using namespace std;

class Pessoa {
	private:
		string nome;
		int dia_nasc;
		int mes_nasc;
		int ano_nasc;
		
	public:
		Pessoa(string& nm, int dia, int mes, int ano){
			nome = nm;
			dia_nasc = dia;
			mes_nasc = mes;
			ano_nasc = ano;
		}
		void print_nascimento(){
			cout << dia_nasc << "/" << mes_nasc << "/" << ano_nasc << endl;
		}
};

