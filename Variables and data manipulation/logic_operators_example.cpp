#include <iostream>
using namespace std;

int main()
{
    bool a(1),b(1),c(0); // a = 1, b = 1, c = 0
    bool result = a || b && c ; //falso se não tivesse precedência
	cout<<"com a precedencia do AND o resultado e: "<< result<<'\n';
	result =  result = (a || b) && c ;
	cout<<"se nao tivesse a precedencia do AND o resultado seria: "<< result<<'\n';
    return 0;
}
