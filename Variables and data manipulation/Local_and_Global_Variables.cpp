#include <iostream>

using namespace std;

int a = 45;
int main()
{
	int a = 100;
    	cout << "Valor global de A: "<< ::a << endl;
    	cout << "Valor local de A: "<< a << endl;
    	
    	return 0;       
}
