#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, cont;
	
	cout << "Informe um número: ";
	cin >> num;
	cont = num - 1;
	
	while(num % cont != 0){
		cont--;
	}
	
	if(cont == 1){
		cout << "O número é primo!" << endl;
	}
	else {
		cout << "O número não é primo!" << endl;
	}
	
	system("pause");
	return 0;
}
