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
		cout << "                                      |             |\n";
		cout << "                                      |_____________|\n";

		cout << " \n";
		cout << "Inside, you see a few desks scattered around. Some have syringes, cotton swabs, and other\n";
		cout << "lab equipment and machines on them. One has a file folder containing a stack of papers, and in the back\n";
		cout << "of the room, there are several enclosures, each containing an animal.\n";
		cout << "What do you want to do?\n";
		cout << "To examine the desks, press 1. To examine the enclosures, press 2. To examine the file folder, press 3.\n";
		cout << "To check your inventory, press 4.\n";

		while (hasClue3 == false) {
			if (choice3 == 1) {
				cout << "You go over to the desks and take a look. You see cotton swabs and syringes, as well as\n";
				cout << "microscopes and other kinds of lab equipment. It seems like this is where the genetic material in\n";
				cout << "the jars you saw in Lab 2 came from, and the swabs and syringes are probably used to collect\n";
				cout << "samples. It seems like the microscopes and other machines are there to examine the results,\n";
				cout << "perhaps before and after the experiments are conducted.\n"; 
			}
		}
	}
};