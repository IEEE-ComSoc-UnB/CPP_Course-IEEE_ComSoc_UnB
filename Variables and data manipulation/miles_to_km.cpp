#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	double dist_km, dist_miles;
	
	cout << "Informe uma distancia em milhas: ";
	cin >> dist_miles;
	
	dist_km = 1.60934*dist_miles;
	
	cout << dist_miles << " milhas = " << dist_km << "km" << endl;
	
	return 0;
}
