#include <iostream>
#include <string>
#include <vector>
#include "base_station.h"
#include "user_end.h"

using namespace std;
		
void BaseStation::connect(UserEnd* ue){
	connected_to.push_back(ue);
}
		
void BaseStation::print_id_position(){
	cout << "BS" << id << " at " << "[" << position[0] << "," << position[1] 
		<< "," << position[2] << "] ";
}
		
/*void print_connection() {
	print_id_position();
	cout << " is connected to ";
	for()
	connected_to->print_id_position();
}*/
