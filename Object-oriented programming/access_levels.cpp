#include <locale>

using namespace std;

class ClasseA{
	public: int publicA;
	
	protected: int protectedA;
	
	private: int privateA;
	
	public:
		void metodoA(){
			publicA = 0;	// permitido
			protectedA = 0; // permitido
			privateA = 0;   // permitido
		}
};

class ClasseB: public ClasseA{
	public:
		void metodoB(){
			publicA = 0;    // permitido
			protectedA = 0; // permitido
			privateA = 0;   // inacessivel
		}
};

class ClasseC{
	public:
		void metodoC(ClasseA a){
			a.publicA = 0; 	  // permitido
			a.protectedA = 0; // inacessivel
			a.privateA = 0;   // inacessivel
		}
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Criar objetos
	ClasseA a;
	ClasseB b;
	ClasseC c;
	
	// Chamar metodos
	a.metodoA();
	b.metodoB();
	c.metodoC(a);
	
	system("pause");
	return 0;
}
