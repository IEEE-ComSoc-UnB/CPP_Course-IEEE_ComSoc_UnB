#include <iostream>
using namespace std;

class Data
{
private:
    int m_dia;
    int m_mes;
    int m_ano;
 
public:
	/*Data() // default Constructor
	{ 
		m_dia = 1;
		m_mes = 1;
		m_ano = 2020; 
	}*/
	 
	Data(int dia = 1, int mes = 1, int ano = 2020) // Construtor 
	{ 
		m_dia = dia;
		m_mes = mes;
		m_ano = ano; 
	}   

int getDia() // get para dia
	{ 
		return m_dia; 
	} 

	int getMes() // get para mes
	{ 
		return m_mes; 
	} 

	int getAno() // get para ano
	{ 
		return m_ano; 
	} 
	
	void print_data()
	{
		cout<<m_dia <<"/"<<m_mes <<"/"<<m_ano <<endl;
	}
};

int main(){
	
	Data d;
//	Data d1(15,11,2018);
	d.print_data();
//	d1.print_data();
	
	return 0;
}

