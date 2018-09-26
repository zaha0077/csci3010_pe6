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
	return 0;
	}
