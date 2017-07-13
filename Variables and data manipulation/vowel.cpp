#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char vog;
	
	cout << "Informe uma vogal: ";
	cin >> vog;
	
	switch(vog) {
		case 'a':
			cout << "a e a primeira vogal." << endl;
			break;
		case 'e':
			cout << "e e a segunda vogal." << endl;
			break;
		case 'i':
			cout << "i e a terceira vogal." << endl;
			break;
		case 'o':
			cout << "o e a quarta vogal." << endl;
			break;
		case 'u':
			cout << "u e a quinta vogal." << endl;
			break;
		default:
			cout << "A letra informada nao corresponde a uma vogal." << endl;	
	}
	
	system("pause");
	return 0;
}

