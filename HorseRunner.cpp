/****************\
 *Tyler Robbins	*
 *1/18/14	*
 *Horse Runner  *
\****************/

#include <iostream>
#include <stdio.h>
#include <string>
#include "Horse.h"

using namespace std;

int main(){
	std::string textInput;
	int numInput;
	Horse horse1("", 0);

	cout << "Please enter the name of your horse: ";
	cin >> textInput;
	horse1.setName(textInput);

	cout << "Great! Now, what is " << horse1.getName() << "'s speed: ";
	cin >> numInput;
	horse1.setSpeed(numInput);

	cout << horse1.getName() << " can run at " << horse1.getSpeed() << " meters per second." << endl;

	return 0;
}

char nuclear = '\u2622';
