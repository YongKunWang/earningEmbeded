#include <iostream>
#include <cstdlib>

int main()
{ 
	double x = 1;
	double y = -1;
	double z = 0;

	try{ 
		if(x == -y)
			throw "Bad x == -y";
	}catch(const char * s)
	{ 
		std::cout << s << std::endl;
	}

	return 0;
}
