#include <iostream>
#include <complex>
#include <utility>
#include <string>
#include "second_solve.h"

using namespace std;

int main()
{
	FuncSecond f1;
	double x1;
	pair< complex<double>,complex<double> > rts;
	string sig;
	
	cout << "f(x) = ax^2 + bx + c" << endl;
	
	cout << "Informe o parametro a: ";
	cin >> f1.a;

	
	cout << "Informe o parametro b: ";
	cin >> f1.b;
	
	cout << "Informe o parametro c: ";
	cin >> f1.c;
	
	rts = f1.roots();
	
	cout << "As raizes sao: ";
	
	sig = rts.first.imag() >= 0 ? " + ":" - ";
	cout << rts.first.real() << sig << abs(rts.first.imag())<< "i e ";
	
	sig = rts.second.imag() >= 0 ? " + ":" - ";
	cout << rts.second.real() << " + " << abs(rts.second.imag()) << "i." << endl;
	
	system("pause");
	return 0;
}


