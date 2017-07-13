#ifndef DOUTOR_H_
#define DOUTOR_H_

#include <string>
#include <vector>

using namespace std;

class Paciente;

class Doutor
{
private:
    string nome;
    vector<Paciente*> pacientes_vec;
 
public:
    Doutor(string n)
		: nome(n){ }
 
 	void add_paciente(Paciente* pac){
 		pacientes_vec.push_back(pac);
	}
 
	string getNome() { return nome; }
};

class Paciente
{
private:
	string nome;
	Doutor* doc;

public:
	Paciente(string n):
    	nome(n){ }
    	
    void add_doc(Doutor* dc){
    	doc = dc;
	}
};
#endif

