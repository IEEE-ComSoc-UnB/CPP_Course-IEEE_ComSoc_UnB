#include <iostream>

using namespace std;

int main()
{
    double n,r; //Declare isso antes de tudo
    
    cout << "Insira um numero:"; //
    cin >> n; //E guarde esse numero em n
    
    r = 5*n; // Multiplique por cinco
    
    // E mostre no console
    cout << "5 x " << n << " = " << r << endl;
	
    system("pause");
}

