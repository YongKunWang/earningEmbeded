#include <iostream>
#include <string>

struct free_throws {
	
	std::string name;

	int made;

	int attempts;

	float percent;

};

int main( )
{ 
	
	free_throws one = {"aaa", 13, 14};

	set_pc(one);
	
	display(one);
	
	accumulate(team, one);
	
	display(one);


	return 0;
}

void



