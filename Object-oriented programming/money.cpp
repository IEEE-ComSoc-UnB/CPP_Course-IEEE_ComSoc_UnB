#include <locale>
#include <iostream>

using namespace std;

class Dinheiro{
	private:
		int reais;
		int centavos;
		
	public:
		Dinheiro(){
			reais = 0;
			centavos = 0;
		}
		
		Dinheiro(int r, int c)
		{
			reais = r + c/100;
			centavos = c%100;
		}
		
		int get_reais(){
			return reais;
		}
		void set_reais(int r){
			reais = r;
		}
		
		int get_centavos(){
			return centavos;
		}
		void set_centavos(int c){
			reais = reais + c/100;
			centavos = c%100;
		}
		
		void print(){
			cout << "R$" << reais << "," << centavos << endl;
		}
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	Dinheiro d1, d2(1,99), d3(2,150);
	int r, c;
	
	cout << "Valor 1: ";
	d1.print();
	
	cout << "Valor 2: ";
	d2.print();
	
	cout << "Valor 3: ";
	d3.print();
	
	cout << "Redefinindo o Valor 3..." << endl;
	cout << "Insira os reais: ";
	cin >> r;
	d3.set_reais(r);
	cout << "Insira os centavos: ";
	cin >> c;
	d3.set_centavos(c);
	
	cout << "Valor 3: ";
	d3.print();
	
	system("pause");
	return 0;
}
