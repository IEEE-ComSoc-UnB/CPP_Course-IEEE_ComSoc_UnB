#include <iostream>
 using namespace std;
 
int main()
{
	cout << "Insira um inteiro: ";
    int x;
    cin >> x;
 
    cout << "Insira outro inteiro: ";
    int y;
    cin >> y;
 
    if (x == y)//Função para verificar se X é igual a Y
        cout << x << " e igual a " << y << "\n";
    if (x != y)//Função para verificar se X é diferente de Y
        cout << x << " nao e igual a " << y << "\n";
    if (x > y)//Função para verificar se X é maior que Y
        cout << x << " e maior que " << y << "\n";
    if (x < y)//Função para verificar se X é menor que Y
        std::cout << x << " e menor que " << y << "\n";
    if (x >= y)//Função para verificar se X é maior ou igual a Y
        cout << x << " e maior ou igual a " << y << "\n";
    if (x <= y)//Função para verificar se X é menor ou igual a Y
        cout << x << " e menor ou igual a " << y << "\n";
 
    return 0;
}
