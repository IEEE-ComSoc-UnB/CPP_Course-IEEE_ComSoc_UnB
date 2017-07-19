#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int arr1[3][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9,10,11,12}};
	int arr2[3][4] = {{12,11,10,9},{8, 7, 6, 5},{4, 3, 2, 1}};
	
	cout << "A soma das matrizes é: " << endl;
	
	for(int lin = 0; lin < 3; lin++) {
		
		for(int col = 0; col < 4; col++){
			cout << arr1[lin][col] + arr2[lin][col] << "	";
		}
		
		cout << endl;
	}
	
	system("Pause");
	return 0;
}

