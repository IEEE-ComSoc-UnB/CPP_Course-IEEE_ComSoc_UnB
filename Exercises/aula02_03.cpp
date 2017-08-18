#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declarar enumeradores
	enum cores{
		VERMELHO,
		AZUL,
		VERDE
	};
	enum frutas{
		BANANA,
		ABACATE,
		LARANJA
	};
	
	// Imprimir na tela
	cout << VERMELHO << " + " << ABACATE << " = " << VERMELHO + ABACATE << endl;
		
	system("pause");
	return 0;
}
