#include <iostream> 
using namespace std;

int main(){

	bool b;
	char c;
	int i;
	float f;
	double d;
	// Definindo enum
	enum Cor {AZUL, VERDE, VERMELHO};
	// Declarando e atribuindo enum
	Cor cor1;
	
	cout << "Antes da atribuicao: " << endl;
	cout << b << endl;
	cout << c << endl;
	cout << i << endl;
	cout << f << endl;
	cout << d << endl;	
	cout << cor1 << endl << endl;
	
	b = true;
	c = 'R';
	i = 5;
	f = 1.223;
	d = 42.424242;
	cor1 = VERMELHO;
	
	cout << "Apos a atribuicao: " << endl;
	cout << b << endl;
	cout << c << endl;
	cout << i << endl;
	cout << f << endl;
	cout << d << endl;	
	cout << cor1 << endl;
	
	return 0;
}

