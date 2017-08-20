#include <iostream>
#include <string>
#include "user_end.h"
#include "base_station.h"

using namespace std;

void UserEnd::print_id_position(){
	cout << "UE" << id << " at " << "[" << position[0] << "," << position[1] 
		<< "," << position[2] << "]";
}
		
void UserEnd::print_connection() {
	print_id_position();
	cout << " is connected to ";
	connected_to->print_id_position();
	cout << endl;
}
