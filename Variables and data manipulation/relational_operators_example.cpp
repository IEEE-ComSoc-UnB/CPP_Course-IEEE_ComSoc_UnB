#include <iostream>
#include <locale.h>

 using namespace std;
 
int main()
{
	setlocale (LC_ALL,"Portuguese");
	cout << "Insira um inteiro: ";
    int x;
    cin >> x;
 
    cout << "Insira outro inteiro: ";
    int y;
    cin >> y;
 
    if (x == y)//Função para verificar se X é igual a Y
        cout << x << " é igual a " << y << "\n";
    if (x != y)//Função para verificar se X é diferente de Y
        cout << x << " não é igual a " << y << "\n";
    if (x > y)//Função para verificar se X é maior que Y
        cout << x << " é maior que " << y << "\n";
    if (x < y)//Função para verificar se X é menor que Y
        std::cout << x << " é menor que " << y << "\n";
    if (x >= y)//Função para verificar se X é maior ou igual a Y
        cout << x << " é maior ou igual a " << y << "\n";
    if (x <= y)//Função para verificar se X é menor ou igual a Y
        cout << x << " é menor ou igual a " << y << "\n";
 
    return 0;
}
