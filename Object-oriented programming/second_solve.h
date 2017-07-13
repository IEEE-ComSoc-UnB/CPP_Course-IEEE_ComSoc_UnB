#include <iostream>
#include <complex>
#include <utility>

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
	
		
		pair< complex<double>,complex<double> > roots() {
			pair< complex<double>,complex<double> > rts;
			complex<double> delta;
			
			delta = pow(b,2.0) - 4*a*c;
			
			rts.first = (-b + sqrt(delta))/(2*a);
			rts.second = (-b - sqrt(delta))/(2*a);
			
			return rts;
		}
};

