#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, cont = 0;
	
	cout << "Informe um número: " << endl;
	cin >> num;
	int inc = num < 0 ? -1:+1;
	
	while(cont != num + inc) {
		cout << cont << "\t";
		cont = cont + inc;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
