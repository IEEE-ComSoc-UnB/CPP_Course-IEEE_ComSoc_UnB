#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
    double n,r; //Declare isso antes de tudo
    
    cout << "Insira um número:"; //
    cin >> n; //E guarde esse numero em n
    
    r = 5*n; // Multiplique por cinco
    
    // E mostre no console
    cout << "5 x " << n << " = " << r << endl;
	
    system("pause");
}

