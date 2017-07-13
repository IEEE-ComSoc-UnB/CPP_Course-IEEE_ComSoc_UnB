#include <iostream>
#include <string>
#include "estudante.h"
#include "curso.h"

using namespace std;
 
int main()
{
    
   Curso c1 = Curso("Calculo 1");
   Curso c2 = Curso("Fisica 1");
    Estudante *e1 = new Estudante("Ana");
    Estudante *e2 = new Estudante("Paulo");
    
    c1.matricular(e1);
    c1.listar_alunos();
    
    c2.matricular(e1);
    c2.matricular(e2);
    c2.listar_alunos();
 
    delete e1;
    delete e2;
 
 	system("Pause");
    return 0;
}

