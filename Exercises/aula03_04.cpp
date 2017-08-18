#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Declarar variaveis
	int num;
	
	// Inicializar semente
	srand(time(NULL));
	
	// Gerar numero aleatorio
	num = rand()%101;
	cout << "num  = " << num << endl;
	
	// Imprimir na tela
	if((num >= 50) && (num%2 != 0)){
		cout << "Sucesso!" << endl;
	}
	
	system("pause");
	return 0;
}
