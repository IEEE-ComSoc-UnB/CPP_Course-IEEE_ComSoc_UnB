#include <iostream>
#include "data.h"

using namespace std;

int main()
{
	Data dt;
	dt.ano = 2017;
	dt.mes = 05;
	dt.dia = 04;	

	cout << "May the fourth be with you!"<< endl;
	dt.print();
	
	system("pause");
	return 0;
}

