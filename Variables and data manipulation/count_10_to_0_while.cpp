#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int cnt = 10;
	
	cout << "Esse programa conta de 10 até 0." << endl;
	
	while(cnt >= 0){
		cout << cnt << endl;
		cnt--;
	}	
	
	system("pause");
	return 0;
}

