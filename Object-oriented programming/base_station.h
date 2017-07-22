#ifndef BASE_STATION_H
#define BASE_STATION_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UserEnd;

class BaseStation{
	public:
		unsigned int id;
		double position[3];
		vector<UserEnd*> connected_to;
		
		void connect(UserEnd*);
		void print_id_position(void);
		//void print_connection(void);
};

#endif
