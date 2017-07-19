#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int pontos = 0;
	bool todas = false;
	int palavras = 0;
    enum campos{PALAVRA, DICA, NUMERO_CAMPOS}; 				//Enumeração de variáveis constantes
    const int NUMERO_PALAVRAS = 10;							// Número de palavras
    const string PALAVRAS[NUMERO_PALAVRAS][NUMERO_CAMPOS] = // Array de duas dimensões
	{
		{"quine","É um programa que produz seu código fonte como sua saída única."},
		{"codigo de maquina","São representadas por muitas sequências de bits, normalmente limitadas pelo número de bits do registrador principal da CPU."},
		{"python","É uma linguagem de programação de alto nível, interpretada, de script, imperativa, orientada a objetos, funcional, de tipagem dinâmica e forte."},
		{"inteligencia artificial","A ciência e engenharia de produzir máquinas inteligentes. É uma área de pesquisa da computação dedicada a buscar métodos ou dispositivos computacionais que possuam ou multipliquem a capacidade racional do ser humano de resolver problemas."},
		{"software","Normalmente é composto por diversas funções, bibliotecas e módulos que gera um programa executável ao final do processo de desenvolvimento."},
		{"protocolo","É uma convenção que controla e possibilita uma conexão, comunicação, transferência de dados entre dois sistemas computacionais."},
		{"Handshake","É o processo pelo qual duas máquinas afirmam uma a outra que a reconheceu e está pronta para iniciar a comunicação. É utilizado em protocolos de comunicação, tais como: FTP, TCP, HTTP, SMB,SMTP,POP3 etc."},
		{"roteador","É um dispositivo que encaminha pacotes de dados entre redes de computadores, criando um conjunto de redes de sobreposição. É conectado a duas ou mais linhas de dados de redes diferentes."},
		{"camada de aplicacao","É um termo utilizado em redes de computadores para designar a sétima camada do modelo OSI."},
		{"telnet","É um protocolo de rede utilizado na Internet ou redes locais para proporcionar uma facilidade de comunicação baseada em texto interativo bidirecional usando uma conexão de terminal virtual."}	
	};
	palavras = NUMERO_PALAVRAS;
	string jaForam = "";
	while(true)
	{
	//alimenta o gerador de números aleátorios com um número aleatório (semente)
	srand(static_cast<unsigned int>(time(0)));
	int escolha = (rand()%NUMERO_PALAVRAS);
	string aPalavra = PALAVRAS[escolha][PALAVRA];  	// Palavra pra adivinhar
	string aDica = PALAVRAS[escolha][DICA];			//	Dica para a palavra
	
	
	if(jaForam.find(aPalavra) != string::npos)
	{
		continue;
	}
	
	jaForam += aPalavra;
	
		
	
		// Embaralhando a fpalavra
		string embaralhada = aPalavra;
		int tamanho = embaralhada.length();
		for (int i = 0; i < tamanho; ++i )
		{
			int  index1 = (rand() % tamanho);
			int  index2 = (rand() % tamanho);
			char temp   = embaralhada[index1];
			embaralhada[index1] = embaralhada[index2];
			embaralhada[index2] = temp;
		}
		
		//Recebendo o usuário
		cout << "\t\t\tBem-vindo ao Embaralhador de Palavras\n\n";
		cout << "Decifre as letras para fazer uma palavra.\n";
		cout << "Entre 'DICA' para ganhar uma dica.\n";
		cout << "\Entre 'FECHAR' para fechar o jogo.\n\n";	
		cout << "O Anagrama é: " << embaralhada;
		
		string palpite;
		int tenta = 0;
		
		cout << "\nSeu palpite: ";
		getline(cin,palpite);
		
	    while ((palpite != aPalavra) &&  tenta < 3)
		{
			
			if(palpite == "DICA")
			{
				cout << aDica;
				
			}
			else if (palpite == "FECHAR")
			{
				todas = true;
				break;
			}
			else
			{
				cout << "\nDesculpe, mas você ERROOOOOU!";
				cout << "\nVocê tem mais " << 3-tenta << " chances.";
				tenta++;
			}
			cout << "\n\nSeu palpite: ";
			getline(cin,palpite);
		
			
			
			
		}
		
		if (palpite == aPalavra)
		{
			palavras -= 1;
			pontos++;
			system("cls");
			cout << "Parabéns, você acertou.\n";
			cout << "\nFaltam " << palavras <<" palavras\n";
			cout << "\nVocê tem " << pontos <<" de 10 possíveis.\n\n";
			
			
		}
		else if(palpite != aPalavra && todas == false) 
        {
        	palavras -= 1;
        	system("cls");
			cout << "Desculpe, mas suas chances acabaram.\n";
			cout << "\nFaltam " << palavras <<" palavras\n";
			cout << "\nA palavra era: " << aPalavra <<".\n";
			cout << "\nVocê tem " << pontos <<" de 10 possíveis.\n\n";
			
		}
		
		
		if(palavras == 0 || todas != false)
		{
			cout << "\n\nVocê terminou o jogo com " << pontos << " pontos.";
			if(pontos < 5)
			{
				cout << "\nMuito ruim, você não acertou nem metade.\n";
			}
			else if(pontos > 5 && pontos != 10)
			{
				cout << "\nNada mal, talvez você se forme um dia.\n";
			}
			else if( pontos == 10)
			{
				cout << "\nInacreditável, você é o MITO DAS REDES DE COMPUTADORES.\n";
			}
			
			cout << "\nDesenvolvedor Bruno V.\n";
			break;
		}
	
	}
    system("pause");
    
    return 0;       
}