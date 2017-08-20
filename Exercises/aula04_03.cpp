#include <iostream>
#include <locale>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	double arr[3][3];
	
	// Definir semente
	srand(time(NULL));
	
	// Definir precisao
	cout.precision(7);
	
	// Popular array
	for(int k = 0; k < 3; k++){
		for(int l = 0; l <3; l++){
			arr[k][l] = ((double) rand() / (RAND_MAX));
		}
	}
	
	// Imprimir na tela
	for(int k = 0; k < 3; k++){
		for(int l = 0; l <3; l++){
			cout << arr[k][l] << "	";
		}
		cout << endl;
	}
	cout << endl;
	
	// Imprimir maior elemento
	cout << "Os maiores elementos de cada linha são: ";
	for(int k = 0; k < 3; k++){
		double max = 0;
		for(int l = 0; l <3; l++){
			if(arr[k][l] > max) max = arr[k][l];
		}
		cout << max << "  ";
	}
	cout << endl << endl;
	
	system("pause");
	return 0;
}
