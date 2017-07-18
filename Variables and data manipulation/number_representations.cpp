#include <iostream>
#include <locale>

using namespace std;

int main () {
  setlocale(LC_ALL,"Portuguese");
	
  double a = 2.718281828459045235360287;
  double b = 3005.0;
  double c = 1.0e-15;

  cout.precision(5);

  cout << "Padrão:\n";
  cout << a << '\n' << b << '\n' << c << '\n';

  cout << '\n';

  cout << "Fixo:\n" << fixed;
  cout << a << '\n' << b << '\n' << c << '\n';

  cout << '\n';

  cout << "Científico:\n" << scientific;
  cout << a << '\n' << b << '\n' << c << '\n';
  return 0;
}
