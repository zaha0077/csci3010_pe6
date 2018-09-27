#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	
	std::cout << turtle_friend.MakeSound() << std::endl;

	Wombat wombat_charles;
	
	wombat_charles.MakeSound();
	wombat_charles.Fight(turtle_friend);
	
	return 0;
}
