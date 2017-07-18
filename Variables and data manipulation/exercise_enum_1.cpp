#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguease");
	enum precos{BATATA=2, CEBOLA, PIMENTAO=10};
	cout << "Qual o preço da cebola? " << CEBOLA;
	
	return 0;
}
