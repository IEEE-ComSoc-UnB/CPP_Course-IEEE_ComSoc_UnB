#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int ano;
	
	cout << "Informe um ano: ";
	cin >> ano;
	
	if(ano%4 != 0){
		cout << "Nao e bisexto!" << endl;
	}else{
		if((ano%100==0) && !(ano%400==0)){
			cout << "Nao e bisexto!" << endl;
		} else {
			cout << "E bisexto!" << endl;
		}
	}
	
	return 0;
}
