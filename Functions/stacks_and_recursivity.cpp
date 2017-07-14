#include <iostream> 
#include <stack>
#include <locale.h>
#include <stdio.h>

using namespace std;

//função para ilustrar o preenchimento de uma stack
/*int main(){
	setlocale (LC_ALL,"Portuguese");
	stack<int> mystack;
	for(int i = 1; i < 11; i++) {
		cout<< "colocando o elemento " << i<<"\n";
		mystack.push(i);
	}
	cout<<"A pilha está preechida \n\n";
	while (!mystack.empty()){
		cout<<"Tirando o elemento "<<mystack.top()<<endl;
		mystack.pop();
	}

	return 0;
}*/

//Função para ilustrar o Stack Overflow
/*int main(){
	setlocale (LC_ALL,"Portuguese");
	stack<int> mystack;
	int i = 0;
	while(true){

		cout<< "colocando o elemento " << i<<"\n";
		mystack.push(i);
		i++;
	}

	return 0;
}*/



//Função para ilustrar recursividade sem ponto de parada
/*void contagem_regressiva(int a){
	cout<<"faltam "<< a<<" segundos..."<<endl;
	contagem_regressiva(a - 1);
}

void contagem_regressiva_com_parada(int a){
	if(a <= 0){
		cout<<"acabou!!!"<<endl;
		return;
	
	}
	cout<<"faltam "<< a<<" segundos..."<<endl;
	contagem_regressiva_com_parada(a - 1);
}

int main(){
	setlocale (LC_ALL,"Portuguese");
	contagem_regressiva_com_parada(5);
	return 0;
}*/

int fibonacci(int n){
	if(n == 1) return 1;
	if(n == 2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
	
}

int main(){
	setlocale (LC_ALL,"Portuguese");
	cout<<"A sequência de Fibonacci até o décimo termo é: ";
	for(int i =1; i < 11; i++)
	cout<<fibonacci(i)<<"  ";
	return 0;
}
