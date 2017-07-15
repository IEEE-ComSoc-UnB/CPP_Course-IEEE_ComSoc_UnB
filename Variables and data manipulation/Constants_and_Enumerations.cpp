#include <iostream>

using namespace std;

int main()
{
	// Para definir uma constante usa-se a palavra-chave const antes do tipo da variável
	// Lembre-se que: constante são imutáveis
	// Geralmente (não é obrigatório) se denomina uma constante com LETRAS_MAIÚSCULAS separando o segundo nome com '_'
	const int PONTOS_ALIEN = 150;
	int aliensMortos = 10;
	int pontuacao = aliensMortos * PONTOS_ALIEN;
	
	cout << "PONTUACAO: " << pontuacao << endl;
	
	// Se vc tentar dar um novo valor a uma constante 'ex: PONTOS_ALIEN = 200;'
	// Irá ocorrer um erro de compilação
	// ERROR: Atribuição da variável de somente leitura 'PONTOS_ALIEN' 
	
	
	// Uma enumeração é um conjunto de constantes inteiras sem sinal, chamadas de 
	// enumeradores.
	// Por padrão, o valor de um enumerador começa em 0 e é incrementado de 1.
	
	enum dificuldade{NOVATO, FACIL, NORMAL, DIFICIL, IMPOSSIVEL};
	// Nesse caso NOVATO == 0, FACIL == 1, NORMAL == 2. DIFICIL == 3, IMPOSSIVEL == 4
	
	dificuldade jogo1 = FACIL;
	cout << "DIFICULDADE: " << jogo1 << endl;
	
	// Note que, qualquer enumerador que não recebe um valor tem seu valor posto 
	// como o valor do predecessor + 1.
	enum navePreco{NAVE_DE_COMBATE = 25, NAVE_BOMBARDEIRA, NAVE_CRUZADOR = 50};
	navePreco precoMinhaNave = NAVE_BOMBARDEIRA;
	
	cout << "Para melhorar minha nave a uma NAVE_CRUZADOR vai custar: " 
	<< (NAVE_CRUZADOR- precoMinhaNave) << " pontos de recurso. \n"; 
	
    return 0;       
}
