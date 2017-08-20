#ifndef USER_END_H
#define USER_END_H

#include <iostream>
#include <string>

using namespace std;

class BaseStation;

class UserEnd{
	public:
		unsigned int id;
		double position[3];
		BaseStation* connected_to;
		
		void print_id_position();
		void print_connection();
};
#endif
