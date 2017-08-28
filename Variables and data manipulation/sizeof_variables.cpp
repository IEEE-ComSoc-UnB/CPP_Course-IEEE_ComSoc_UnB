#include <iostream>
#include <locale.h> 
using namespace std;

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
}

