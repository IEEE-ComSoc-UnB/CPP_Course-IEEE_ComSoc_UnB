#include <iostream>

using namespace std;

int main(){
	
	int a(1024),b(335);
	bool c = true, d = false;
	
	if((a <= b + 1000) || (c && b == 334)){
		cout << "Mensagem 01" << endl;
		c = a + b > 1500;
		if(c){
			cout << "Mensagem 02" << endl;
		} else if(a%b < 100){
			cout << "Mensagem 03" << endl;
			c = false;
			d = a > 1000;
		}
	}
	else {
		cout << "Mensagem 04" << endl;
	}
	if(c && d){
		cout << "Mensagem 05" << endl;
	}
	
	system("pause");
	return 0;
}
