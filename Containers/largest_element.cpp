#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int arr[5] = {3, 1, 5, 2, 4};
	int max = arr[0];
	
	cout << "A array é: " << endl << "[";
	for(int cnt = 0; cnt < 5; cnt++){
		if(cnt == 4) {
			cout << arr[cnt] << "]" << endl;
		} else {
			cout << arr[cnt] << ", ";
		}
	}

	for(int cnt = 0; cnt < 5; cnt++){
		if(arr[cnt] > max) {
			max = arr[cnt];
		}
	}

	cout << "O maior numero da array é " << max << endl;
	
	system("Pause");
	return 0;
}

