/*
 * Animal fight testing.
 */
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main(){
	Turtle leonardo = Turtle();
	Turtle turtle_friend;
  Turtle turtley_the_turtle;
  
  //hornet
  Hornet yellowjacket = Hornet();
	for (int i=0;i<6;i++){
		yellowjacket.Fight(leonardo);
		cout << endl;
	}
  
  //cow
  Cow steve_the_mooer;
	steve_the_mooer.Fight(turtley_the_turtle);

  //wombat
	Wombat wombat_charles;
	wombat_charles.MakeSound();
	wombat_charles.Fight(turtle_friend);
  
	return 0;
}