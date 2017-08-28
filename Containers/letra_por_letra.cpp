#include <iostream>
#include <string>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	//pede uma string para o usuário e imprime caractere por caractere da string
	string str = "";
	cout<<"Insira uma palavra: "<<endl;
	cin>>str;
	cout<<"A string caractere por caractere é: \n";
	for ( string::iterator it=str.begin(); it!=str.end(); ++it)
    	cout << *it<<'\n';
	
	return 0;	
}
