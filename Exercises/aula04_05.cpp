#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	float arr[5];
	// Indice do maximo elemento
	int max_idx = 0;
	
	// Receber array e definir maximo
	for(int k = 0; k < 5; k++){
		cout << "Informe o " << k+1 << "\xB0" <<" elemento: ";
		cin >> arr[k];
		// Definir maximo
		if(arr[k] >= arr[max_idx]){
			max_idx = k;
		}
	}
	
	// Dividir elementos por 10
	while(abs(arr[max_idx]) > 1){
		for(int k = 0; k < 5; k++){
			arr[k] = arr[k]/10;
		}
	}
	
	// Apresentar resutlados
	cout << "A array final é: ";
	for(int k = 0; k < 5; k++){
		cout << arr[k] << "	";
	}
	cout << endl;
	
	system("pause");
	return 0;
}
