#include <iostream>

using namespace std;

int main()
{
	int k = 42;
	int* ptr = NULL;
	
	ptr = &k;
	
	cout << "O valor de k e: " << k << endl;
	cout << "O endereco de k e: " << &k << endl;
	cout << "O endereco armazenado no ponteiro ptr e: " << ptr << endl;
	cout << "O valor contido no endereco de k e: " << *(&k) << endl;
	cout << "O valor contido no endereco armazenado no ponteiro ptr e: " << *ptr << endl;
	
	system("Pause");
	return 0;
}

