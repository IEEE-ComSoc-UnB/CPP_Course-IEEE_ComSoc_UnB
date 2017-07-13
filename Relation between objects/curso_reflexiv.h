#ifndef PACIENTE_H_
#define PACIENTE_H_

#include <string>
#include <list>
#include "estudante.h"

using namespace std;

class Curso
{
private:
    string d_nome;
    list<Estudante*> alunos;
    Curso *prerequisito;
 
public:
    Curso(string nome, Curso *pre = NULL)
        : d_nome(nome),prerequisito(pre)
    {
    	alunos.clear();
    }
};
#endif

