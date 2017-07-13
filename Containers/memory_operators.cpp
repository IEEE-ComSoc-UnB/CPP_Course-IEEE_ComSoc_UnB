#include <iostream>

using namespace std;

int main()
{
	int k = 42;
	
	cout << "O valor de k e: " << k << endl;
	cout << "O endereco de k e: " << &k << endl;
	cout << "O valor contido no endereco de k e: " << *(&k) << endl;
	
	system("Pause");
	return 0;
}

