#include <iostream>
#include "data.h"

using namespace std;

int main()
{
	Data dt1;
	dt1.ano = 2017;
	dt1.mes = 05;
	dt1.dia = 04;
	
	Data dt2;
	dt2.ano = 2017;
	dt2.mes = 05;
	dt2.dia = 25;	

	cout << "Star Wars Day: ";
	dt1.print();
	
	cout << "Towel Day: ";
	dt2.print();
	
	system("pause");
	return 0;
}

