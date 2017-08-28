#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main(){
	
	list<int> numeros;
	int num;
	
	cout << "Insira 10 numeros: " << endl;
	for(int cnt = 0; cnt < 10; cnt++){
		cin >> num;
		numeros.push_back(num);
	}
	
	list<int>:: iterator it = numeros.begin();
	list<int>:: iterator it2 = numeros.begin(), it3 = numeros.begin();
	advance(it2,3);
	advance(it3,2);
	
	for(it; it != it2; ++it){
		if(it == it3) numeros.erase(it);
	}
	
	cout << "Os numeros apos remocao sao: " << endl;
	for(it = numeros.begin(); it != numeros.end(); ++it){
		cout << *it << "	";
	}
	
	it = numeros.begin();
	it2 = numeros.begin();
	it3 = numeros.begin();
	advance(it2,7);
	advance(it3,6);
	
	for(it; it != it2; ++it){
		if(it == it3) numeros.insert(it2);
	}
	
	return 0;
}
