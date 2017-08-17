#include<iostream>

using namespace std;

int main(){
	//a. a idade de uma pessoa?
	// no geral, usamos um numero inteiro para falar da idade de alguem
	// ainda assim, variaveis float ou double tambem podem ser usadas com
	// esse fim
	int idade = 24;
	double idade2 = 24.5; // 24 anos e 6 meses
	
	//b. distancia entre duas cidades
	// por ser um numero real, a distancia deve ser double ou float
	double distancia1 = 10.55;
	float distancia2 = 25.3355;
	
	//c. as possiveis mencoes que um aluno pode ter
	// para esse caso, ha um numero finito de possibilidades
	// logo, enum e uma opcao viavel
	enum mencoes{
		SR,
		II,
		MI,
		MM,
		MS,
		SS
	};
	
	//d. o fato de um dispositivo estar ou nao ativo
	// como so duas possiblidades sao possiveis (ativo ou nao)
	// o tipo bool e recomendado
	bool ativo = true;
	
	system("pause");
	return 0;
}

