#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string nome;
	
	getline(cin,nome);
	cout << nome << endl;
	if(nome == ""){
		cout << "HEY!" << endl;
	}
	
	system("pause");
	return 0;
}
