#include <iostream>

using namespace std;

int main()
{
	int arr[5] = {3, 1, 5, 2, 4};
	int min = 0;
	unsigned int minIdx;
	
	cout << "A array e: " << endl << "[";
	for(int cnt = 0; cnt < 5; cnt++){
		if(cnt == 4) {
			cout << arr[cnt] << "]" << endl;
		} else {
			cout << arr[cnt] << ", ";
		}
	}

	for(int cnt = 0; cnt < 5; cnt++){

		min = arr[cnt];
		
		for(int cnt2 = cnt; cnt2 < 5; cnt2++){

			if(arr[cnt2] < min) {
				min = arr[cnt2];
				minIdx = cnt2;
			}

		}

		swap(arr[minIdx],arr[cnt]);
	}

	cout << "A array e ordenada e: " << endl << "[";
	for(int cnt = 0; cnt < 5; cnt++){
		if(cnt == 4) {
			cout << arr[cnt] << "]" << endl;
		} else {
			cout << arr[cnt] << ", ";
		}
	}
	
	system("Pause");
	return 0;
}

