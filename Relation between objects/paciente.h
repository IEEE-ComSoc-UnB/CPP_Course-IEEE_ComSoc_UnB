#ifndef PACIENTE_H_
#define PACIENTE_H_

#include <string>

using namespace std;

class Doutor;

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

