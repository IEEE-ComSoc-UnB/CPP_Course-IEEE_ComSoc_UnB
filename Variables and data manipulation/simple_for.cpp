#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*
	// A operacao base10 *= 10 equivale a operacao base10 = 10 * base10
	for(double base10 = 1; base10 <= 1e10; base10 *= 10){
		cout << base10 << endl;
	}
	
	// O mesmo vale para /= , += , -= e 
	for(double base10 = 1; base10 >= 1e-10; base10 /= 10){
		cout << base10 << endl;
	}*/
	
	double arr[4] = {0, 1};
	
	for(int cont=0;cont <4; cont++){
		cout << arr[cont];
	}
	 /*
	int cont;
	for(cont = 0;;cont++){
		if(cont%2 == 0) continue;
		cout << cont << endl;
		if(cont > 15) break;
	}
	
	// Loop infinito
	/*
	for(int cont = 0;;cont++){
		cout << cont;
	}
	*/
	
	return 0;
}
