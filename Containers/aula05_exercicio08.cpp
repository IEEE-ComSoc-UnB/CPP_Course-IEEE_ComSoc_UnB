#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	
	int myints[] = {0,1,2,3,4,5,6,7,8,9,10};
	list<int> mylist(myints, myints + sizeof(myints) / sizeof(int));
	
	cout << "A lista inicialmente e: " << endl;
	for(list<int>::iterator it = mylist.begin(); it != mylist.end(); it++){
		cout << *it << endl;
	}
	
	srand(static_cast<unsigned int>(time(NULL)));
	random_shuffle(mylist.begin(),mylist.end());
	
	return 0;
}
