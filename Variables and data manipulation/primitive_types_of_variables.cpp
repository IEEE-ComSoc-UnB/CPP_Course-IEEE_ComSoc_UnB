#include <iostream> 
#include <locale.h>
using namespace std;

/*
int main(){
	
	bool b = 1; //ou poderíamos dizer:  
	bool b1 = true;
	char c = 'R';
	int i = 7;
	float f = 3.14;
	double d = 3.14159;
	
	return 0;
}
*/
int main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	cout<<"A variável i apenas declarada tem valor: "<< i<<'\n';
	i = 7;
	cout<<"A variável i com o valor 7 tem valor: "<< i<<'\n';
	
	return 0;
}
