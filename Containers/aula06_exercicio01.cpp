#include <iostream>

namespace kmh {
	const double VEL_LUZ(2.99792e8);
}

namespace mph {
	const double VEL_LUZ(6.70617e8);
}

int main(){
	
	std::cout<< "A velocidade da luz e: " << kmh::VEL_LUZ << "km/h" << std::endl;
	std::cout<< "A velocidade da luz e: " << mph::VEL_LUZ << "mp
	h" << std::endl;
	
	return 0;
}
