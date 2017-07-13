#include <iostream>
#include <math.h>

using namespace std;

class FuncSecond{
	/*
	Funcao na forma:
	
	f(x) = ax^2 + bx + c
	
	*/
	public:
		double a;
		double b;
		double c;
		
		double calc(double x) {
			double f_x;
			f_x = a*(pow(x,2.0)) + b*x + c;
			return f_x;
		};
};

