#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	const int tam = 5;
	double arr[tam], soma = 0, med = 0;
	
	for(int cnt = 0; cnt < tam; cnt++) {
		cout<< "Informe o elemento " << cnt << " do array: ";
		cin >> *(arr + cnt);
	}
	
	for(int cnt = 0; cnt < tam; cnt++) {
		soma = soma + *(arr + cnt);
	}
	med = soma/tam;
	
	cout << "A média é: " << med << endl;
	
	system("Pause");
	return 0;
}

