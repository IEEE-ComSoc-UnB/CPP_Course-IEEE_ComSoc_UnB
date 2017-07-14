#include <iostream>
using namespace std;

class Data
{
private:
    int m_dia;
    int m_mes;
    int m_ano;
 
public:
    int getDia() // get para dia
	{ 
		return m_dia; 
	} 
    void setDia(int dia) // set para dia
	{ 
		m_dia = dia; 
	}
	
	int getMes() // get para mes
	{ 
		return m_mes; 
	} 
    void setMes(int mes) // set para mes
	{ 
		m_mes = mes; 
	}
	
	int getAno() // get para ano
	{ 
		return m_ano; 
	} 
    void setAno(int ano) // set para ano
	{ 
		m_ano = ano; 
	}
};


int main(){
	
	Data d;
	d.setAno(2017);
	cout<<d.getAno();
	
	return 0;
}
