#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
    bool a(1),b(1),c(0); // a = 1, b = 1, c = 0
    bool result = a || b && c ; //falso se não tivesse precedência
	cout<<"com a precedência do AND o resultado é: "<< result<<'\n';
	result =  result = (a || b) && c ;
	cout<<"se não tivesse a precedência do AND o resultado seria: "<< result<<'\n';
    return 0;
}
