#include <iostream>
#include "func_first.h"

using namespace std;

int main()
{
	FuncFirst f1;
	double x1 = 1.0;
	double y1;
	
	f1.a = 5;
	f1.b = -2;
	
	y1 = f1.calc(x1);

	cout << "f(" << x1 << ") = " << y1 << endl;
		
	system("pause");
	return 0;
}

