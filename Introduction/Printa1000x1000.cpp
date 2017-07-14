#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){
  clock_t Ticks[2];
  Ticks[0] = clock();
  for(int i = 0; i < 100; i++){
    for(int a = 0; a < 100; a++)
    {
      cout << "Linux é foda!! A:"<< a <<" I:"<< i << endl;
    }
  }
  Ticks[1] = clock();
  double tempo = (Ticks[1] - Ticks[0])*1.0/ CLOCKS_PER_SEC;
  cout << "\n\n\nTempo gasto para execução: " << tempo<<" segundos. \n";

  return 0;
}
