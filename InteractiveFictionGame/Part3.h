#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Part3 {
public:
	//user input
	int choice3;

	//decision 7
	bool hasClue3 = false;

	//decision 8
	bool hasClue4 = false;
	
	void part3() {
		vector<string> inventory3;

		inventory3.push_back("flashlight");
		inventory3.insert(inventory3.begin(), "key");
		inventory3.insert(inventory3.begin(), "lab report");
		inventory3.insert(inventory3.begin(), "key card");
		inventory3.insert(inventory3.begin(), "lab 1 letter");
		inventory3.insert(inventory3.begin(), "lab report 2");

		cout << "After you look through Lab 2, you go to the door marked \"Lab 3\" and swipe the key card. The door opens,\n";
		cout << "and you go in.\n";
		cout << " \n";

		//ASCII art
		cout << "                                       _____________ \n";
		cout << "                                      |  _________  |\n";
		cout << "                                      | |  Lab 3  | |\n";
		cout << "                                      | |_________| |\n";
		cout << "                                      |        ___  |\n";
		cout << "                                      |       |___| |\n";
		cout << "                                      |             |\n";
		cout << "                                      |             |\n";
		cout << "                                      |             |\n";

		cout << " \n";
		cout << "Inside, you see a few desks scattered around. Some have syringes, cotton swabs, and other\n";
		cout << "lab equipment and machines on them. One has a file folder containing a stack of papers, and in the back\n";
		cout << "of the room, there are several enclosures, each containing an animal.\n";
		while (hasClue3 == false) {

		}
	}
};