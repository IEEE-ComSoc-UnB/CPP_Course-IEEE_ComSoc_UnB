#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Declaracao de variaveis
	int num, divis = 0;
	
	// Receber numero
	cout << "Informe um número";
	cin >> num;
	
	// Calcular numero de divisores
	for(int k =  num; k > 0; k--){
		if(num%k == 0) divis++;
	}
	
	// Apresentar resultados
	cout << num << " tem " << divis << " divisores." << endl;
	
	system("pause");
	return 0;
}
