#include <iostream>
#include <string>

using namespace std;

int main()
{
	
    /*
		Uma referência é indicada usando-se o operador '&',
		da mesma forma que um ponteiro é indicado usando-se
		o operador '*'.
		Por exemplo você pode declarar a variável 'cebola' como 
		uma referência para a variável 'batata'.
	*/
    
    string batata = "batata";
    string& cebola = batata;
    
    cout << cebola;
    //Resulta em "Batata"
    return 0;       
}