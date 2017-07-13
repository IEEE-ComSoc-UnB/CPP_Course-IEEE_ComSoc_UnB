#include <iostream>
#include "func_sec.h"

using namespace std;

int main()
{
	FuncSecond f1;
	double x1;
	double y1;
	
	cout << "f(x) = ax^2 + bx + c" << endl;
	
	cout << "Informe o parametro a: ";
	cin >> f1.a;
	
	cout << "Informe o parametro b: ";
	cin >> f1.b;
	
	cout << "Informe o parametro c: ";
	cin >> f1.c;
	
	cout << "Informe x: ";
	cin >> x1;
	
	y1 = f1.calc(x1);
	
	cout << "f(" << x1 << ") = " << y1 << endl;
		
	system("pause");
	return 0;
}

