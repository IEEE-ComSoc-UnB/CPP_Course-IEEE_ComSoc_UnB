#include <iostream>

using namespace std;

int main ()
{
	cout << "Esse programa conta de 0 a 10." << endl; 
	
//Implementando o for usando o while
	int i = 0;	//Declara o contador
	while(i <= 10)	//condição para execução do bloco de instruções
	{	
		cout<<i<<endl;	//Bloco de instrução equivalente
						//ao do for
		
		i++;	//incremento do contador
	}
	
	system ("Pause");
	return 0;
}

