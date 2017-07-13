#ifndef PACKET_H_
#define PACKET_H_

using namespace std;

class Packet
{
private:
	int id;
 
public:
	Packet(int pck_id)
		: id(pck_id){ }
 
	int getId() { return id; }
};

class Station
{
private:
	int last_pck_id;
	
public:
	Station(){
		last_pck_id = 0;
	}
	
	void transmit_pck(){
		last_pck_id++;
		Packet tx_pck = Packet(last_pck_id);
	}	
};
#endif

