#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declarar enumeradores
	enum Cor{
		VERMELHO,
		AZUL,
		VERDE
	};
	enum Fruta{
		BANANA,
		ABACATE,
		LARANJA
	};
	
	// Criar variaveis
	Cor c1 = VERMELHO;
	Fruta f1 = LARANJA;
	
	// Imprimir na tela
	cout << c1 << " + " << f1 << " = " << c1 + f1 << endl;
		
	system("pause");
	return 0;
}
