#include<locale>
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

class Pessoa{
	private:
		string name;
		
	public:
		void set_name(string n){
			name = n;
			name[0] = toupper(name[0]);
		}
		string get_name(){
			return name;
		}
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	Pessoa p1;
	
	p1.set_name("goku");
	
	cout << "A pessoa tem nome: " << p1.get_name() << endl;
	
	system("pause");
	return 0;
}
