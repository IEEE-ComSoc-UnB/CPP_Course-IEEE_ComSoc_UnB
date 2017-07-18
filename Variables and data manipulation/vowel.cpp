#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	char vog;
	
	cout << "Informe uma vogal: ";
	cin >> vog;
	
	switch(vog) {
		case 'a':
			cout << "a é a primeira vogal." << endl;
			break;
		case 'e':
			cout << "e é a segunda vogal." << endl;
			break;
		case 'i':
			cout << "i é a terceira vogal." << endl;
			break;
		case 'o':
			cout << "o é a quarta vogal." << endl;
			break;
		case 'u':
			cout << "u é a quinta vogal." << endl;
			break;
		default:
			cout << "A letra informada não corresponde a uma vogal." << endl;	
	}
	
	system("pause");
	return 0;
}

