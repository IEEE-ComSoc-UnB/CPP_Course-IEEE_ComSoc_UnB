#include <iostream>

using namespace std;

class FuncFirst{
	/*
	Funcao na forma:
	
	f(x) = ax + b
	
	*/
	public:
		double a;
		double b;
		
		double calc(double x) {
			double f_x;
			f_x = a*x + b;
			return f_x;
		};
};

