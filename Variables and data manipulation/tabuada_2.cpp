#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"Portuguese");
	int num;
	
	cout << "Informe um número: ";
	cin  >> num;
	
	for(int cnt = 1; cnt <= num; cnt++){
		cout << "Tabuada do " << cnt << endl;
		for(int cnt2 = 1; cnt2 <= 10; cnt2++) {
			cout << cnt2 << " x " << cnt << " = " << cnt*cnt2 << endl;
		}
		cout << "\n\n";
	}
	
	system("pause");
	return 0;
}
