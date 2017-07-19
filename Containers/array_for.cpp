#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	double arr[6] = {188, 183, 150, 182, 180, 66};
	
	for(int cnt = 0; cnt < 6; cnt++) {
		cout<< "O elemento " << cnt << " é " << arr[cnt] << endl;
	}
	
	system("Pause");
	return 0;
}

