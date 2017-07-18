#include <iostream>
#include <locale.h>
using namespace std;

/*
//Função para atribuição múltipla
int main(){
	setlocale (LC_ALL,"Portuguese");
	int a(2),b(3),c(5);
	cout<<"a vale: "<< a<<", b vale: "<< b <<" e c vale: "<< c << endl;
	
	return 0;
}*/


//Função para tamanho das variáveis em memória
int main() {
	setlocale (LC_ALL,"Portuguese");
	bool b = true;
    int i = 100;
    char c = 'r';
    float f = 3.14;
    double d = 3.14159;
    
	cout << "O valor da variável bool b é: " << b << endl;
    cout << "O tamanho na memória da variável b (em bytes) é: " << sizeof(b) << '\n'<< endl;
    cout << "O valor da variável inteira i é: " << i << endl;
    cout << "O tamanho na memória da variável i (em bytes) é: " << sizeof(i) << endl<< endl;
    cout << "O valor da variável char c é: " << c << endl;
    cout << "O tamanho na memória da variável c (em bytes) é: " << sizeof(c) << endl<< endl;
    cout << "O valor da variável float f é: " << f << endl;
    cout << "O tamanho na memória da variável f (em bytes) é: " << sizeof(f) << endl<< endl;
    cout << "O valor da variável double d é: " << d << endl;
    cout << "O tamanho na memória da variável d (em bytes) é: " << sizeof(d) << endl<< endl;

    return 0;
}


//Função para modificadores de tamanho
/*
int main() {
	setlocale (LC_ALL,"Portuguese");
    short int si = 100;
    long int li = 100;
    int i = 100;
    long long int lli = 100;
    unsigned ui = 100;
    double d = 3.14159;
    long double ld = 3.14159265359;
    
    cout << "O tamanho na memória da variável short int é: " << sizeof(si) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável int é: " << sizeof(i) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável unsigned int é: " << sizeof(ui) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável long int é: " << sizeof(li) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável long long int é: " << sizeof(lli) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável double é: " << sizeof(d) <<" bytes"<< '\n'<< endl;
    cout << "O tamanho na memória da variável long double é: " << sizeof(ld) <<" bytes"<< '\n'<< endl;

    return 0;
}*/


//Exercício
/*
int main(){
	setlocale (LC_ALL,"Portuguese");
	int x(2);
	cout<<"Digite um número inteiro..."<< endl;
	cin>> x;
	cout<<"O valor do numero é "<< x <<" e o espaço que ele ocupa na memória é "<< sizeof(x) <<" bytes."<< endl;
	
	return 0;
}*/
