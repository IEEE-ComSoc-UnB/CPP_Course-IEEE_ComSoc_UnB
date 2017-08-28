#include <iostream>
#include <list>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	list<int> numeros;
	int num;
	
	cout << "Insira numeros!" << endl;
	do{
		cin >> num;
		numeros.push_back(num);
	}while(numeros.back() != 0);
	
	numeros.sort();
	
	cout << "A lista ordenada é: "<< endl;
	for(list<int>::iterator it = numeros.begin(); it != numeros.end(); it++){
		cout << *it << endl;
	}
	
	return 0;
}
