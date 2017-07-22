#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
    const int ERROS_MAXIMOS = 10; // Máximo número de vezes que o jogador pode errar.
    
    vector<string> palavras;
    palavras.push_back("TELNET");
    palavras.push_back("TCP");
    palavras.push_back("DHCP");
    palavras.push_back("COAXIAL");
    palavras.push_back("FIBRA");
    palavras.push_back("HTTP");
    palavras.push_back("DNS");
    palavras.push_back("PROPAGACAO");
    palavras.push_back("SINAL");
    palavras.push_back("SHANNON");
    palavras.push_back("NYQUIST");
    palavras.push_back("AMOSTRAGEM");
    palavras.push_back("CANAL");
    palavras.push_back("FREQUENCIA");
    palavras.push_back("POTENCIA");
    
	random_shuffle(palavras.begin(),palavras.end());
    vector<string>::iterator it = palavras.begin();
    int pontos = 0;
    while(it != palavras.end())
	{
	    
	    const string aPalavra = *it;
	    int erros = 0;
	    string ateAgora(aPalavra.size(),'-');
	    string usado = "";
	    
	    cout << "\nBem-vindo a forca!!!\n";
	    
	    
	    while((erros < ERROS_MAXIMOS) && (ateAgora != aPalavra))
		{
			cout << "\n\nVocê tem: " << (ERROS_MAXIMOS - erros);
			cout << " tentativas faltando\n";
			cout << "\nVocê já usou as seguintes letras:\n" << usado << endl;
			cout << "\nAté agora, a palavra é:\n" << ateAgora << endl;
			
			char palpite;
			cout << "\n\nEntre sua letra: ";
			cin >> palpite;
			palpite = toupper(palpite);
			while(usado.find(palpite) != string::npos)
			{
				cout << "\nVocê já advinhou as letras: " << palpite << endl;
				cout << "Entre sua letra: ";
				cin >> palpite;
				palpite = toupper(palpite);
			}
			
			usado += palpite;
			system("cls");
			if(aPalavra.find(palpite)!= string::npos)
			{
				cout << "Correto! " << palpite << " está na palavra.\n";
				
				for (unsigned int i = 0; i < aPalavra.length(); i++)
				{
					if(aPalavra[i] == palpite)
					{
						ateAgora[i] = palpite;
					}
				}
			}
			else
			{
				cout << "Desculpe. " << palpite << " não está na palavra.\n";
				++erros;
			}
			
		}
		system("cls");
		
	    if(erros == ERROS_MAXIMOS)
		{
			cout << "\n\t\tVocê foi enforcado!!" << endl;
		
		}
		else
		{
			cout << "\n\t\tVocê advinhou corretamente!!" << endl;
			pontos++;
		}
		
	    cout << "\n\t\tA palavra era " << aPalavra << endl;
	    cout << "\t\tSeus pontos são: " << pontos << endl << endl;
	    
	    it++;
	}
	system("cls");
	cout << "\n\t\tFIM DE JOGO\n\n";
	if (pontos < 8 )
	{
		cout << "Muito ruim, você não acertou nem metade!!" << endl;
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	
	else if (pontos > 8 && pontos < 15 )
	{
		cout << "Éeeeeeeeeeeee Mais ou menos, mais ou menossss!!" << endl;
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	else
	{
		cout << "Parabéns, You are the legend alive!!!";
		cout << "Pontos obtidos: "<< pontos << endl;
		cout << "Pontos ideal: "<< palavras.size() << endl;
	}
	cout << "\n\n\nDes: Bruno V." << endl;
	system("pause");
	
	return 0;       
}