/*
 * Animal fight testing.
 */
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main(){
	Turtle leonardo = Turtle();
	Hornet yellowjacket = Hornet();
	
	for (int i=0;i<6;i++){
		yellowjacket.Fight(leonardo);
		cout << endl;
	}
  
  Cow steve_the_mooer;
	Turtle turtley_the_turtle;
	steve_the_mooer.Fight(turtley_the_turtle);
  
	return 0;
}

