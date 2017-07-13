#ifndef CURSO_H_
#define CURSO_H_

#include <iostream>
#include <string>
#include <list>
#include "estudante.h"

class Curso
{
private:
    string d_nome;
    list<Estudante*> alunos;
 
public:
    Curso(string nome)
        : d_nome(nome)
    {
    	alunos.clear();
    }
    
    void matricular(Estudante *est){
    	alunos.push_back(est);
    }
	
    void listar_alunos(){
  	cout << "Os alunos de " << d_nome << " sao:" << endl;
		
	 for (list<Estudante*>::iterator it = alunos.begin(); it != alunos.end(); it++) {
    		cout << (*it)->getNome() << endl;
    	 }
     }
};
#endif

