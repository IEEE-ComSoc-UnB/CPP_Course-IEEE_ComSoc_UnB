#ifndef ESTUDANTE_H_
#define ESTUDANTE_H_

#include <string>

using namespace std;

class Estudante
{
private:
    string m_nome;
 
public:
    Estudante(string nome)
        : m_nome(nome)
    {
    }
 
    string getNome() { return m_nome; }
};
#endif

