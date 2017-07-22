#include <iostream>
#include <string>
#include <locale>

#include "user_end.h"
#include "base_station.h"

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	BaseStation bs_0;
	UserEnd ue_0, ue_1;
	
	bs_0.id = 0;
	bs_0.position[0] = 0;
	bs_0.position[1] = 0;
	bs_0.position[2] = 50;
	
	cout << "Created ";
	bs_0.print_id_position();
	cout << endl;
	
	/*ue_0.id = 0;
	ue_0.position[0] = 70;
	ue_0.position[1] = 0;
	ue_0.position[2] = 1.5;
	ue_0.connected_to = &bs_0;
	bs_0.connect(&ue_0);
	
	cout << "Created ";
	ue_0.print_id_position();
	cout << endl;
	ue_0.print_connection();
	
	ue_1.id = 1;
	ue_1.position[0] = 70;
	ue_1.position[1] = -70;
	ue_1.position[2] = 1.5;
	ue_1.connected_to = &bs_0;
	bs_0.connect(&ue_1);
	
	cout << "Created ";
	ue_1.print_id_position();
	cout << endl;
	ue_1.print_connection();
	
	system("pause");
	return 0;*/
}
