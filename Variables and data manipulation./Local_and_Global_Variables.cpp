#include <iostream>
#include <string>

using namespace std;

int a = 45;
int main()
{
	int a = 100;
    cout << "Valor global de A: "<< ::a << endl;
    cout << "Valor local de A: "<< a << endl;
    
    printf("Valor global de A: %d", ::a);
    printf("Valor global de A: %d",   a);
    
    
  
    
    return 0;       
}