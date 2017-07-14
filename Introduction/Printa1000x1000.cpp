#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(){
  clock_t Ticks[2];
  Ticks[0] = clock();
  for(int i = 0; i < 1000; i++){
    for(int a = 0; a < 1000; a++)
    {
      cout << "Linux é foda!! A:"<< a <<" I:"<< i << endl;
    }
  }
  Ticks[1] = clock();
  double tempo = (Ticks[1] - Ticks[0])*1000.0 / CLOCKS_PER_SEC;
  cout << "\n\n\nTempo gasto para execução: " << tempo/1000 <<"segundos. \n";

  return 0;
}
