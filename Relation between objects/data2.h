#include <iostream>

using namespace std;

class Data{
	private:
		int dia;
		int ano;
		int mes;
		
	public:
		Data(int di,int me,int an){
			dia = di;
			mes = me;
			ano = an;
		}
		
		Data(){
			dia = 0;
			mes = 0;
			ano = 0;
		}
		
		void print() {
			cout << dia << "/" << mes << "/" << ano << endl;
		}
};

