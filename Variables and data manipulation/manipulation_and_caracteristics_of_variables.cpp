#include <iostream>
using namespace std;

/*
//Função para atribuição múltipla
int main(){
	
	int a(2),b(3),c(5);
	cout<<"a vale: "<< a<<", b vale: "<< b <<" e c vale: "<< c << endl;
	
	return 0;
}*/

/*
//Função para tamanho das variáveis em memória
int main() {

	bool b = true;
    int i = 100;
    char c = 'r';
    float f = 3.14;
    double d = 3.14159;
    
	cout << "O valor da variavel bool b e: " << b << endl;
    cout << "O tamanho na memoria da variavel b (em bytes) e: " << sizeof(b) << '\n'<< endl;
    cout << "O valor da variavel inteira i e: " << i << endl;
    cout << "O tamanho na memoria da variavel i (em bytes) e: " << sizeof(i) << endl<< endl;
    cout << "O valor da variavel char c e: " << c << endl;
    cout << "O tamanho na memoria da variavel c (em bytes) e: " << sizeof(c) << endl<< endl;
    cout << "O valor da variavel float f e: " << f << endl;
    cout << "O tamanho na memoria da variavel f (em bytes) e: " << sizeof(f) << endl<< endl;
    cout << "O valor da variavel double d e: " << d << endl;
    cout << "O tamanho na memoria da variavel d (em bytes) e: " << sizeof(d) << endl<< endl;

    return 0;
}*/

/*
//Função para modificadores de tamanho
int main() {

    short int si = 100;
    long int li = 100;
    int i = 100;
    long long int lli = 100;
    unsigned ui = 100;
    double d = 3.14159;
    long double ld = 3.14159265359;
    
    cout << "O tamanho na memoria da variavel short int e: " << sizeof(si) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel int e: " << sizeof(i) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel unsigned int e: " << sizeof(ui) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel long int e: " << sizeof(li) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel long long int e: " << sizeof(lli) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel double e: " << sizeof(d) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memoria da variavel long double e: " << sizeof(ld) <<" bytes"<< '\n'<< endl;

    return 0;
}*/


//Exercício
int main(){
	
	int x(2);
	cout<<"Digite um numero inteiro..."<< endl;
	cin>> x;
	cout<<"O valor do numero e "<< x <<" e o espaco que ele ocupa na memoria e "<< sizeof(x) <<" bytes."<< endl;
	
	return 0;
}
