#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Part3 {
public:
	//user input
	int choice3 = 0;

	//decision 7
	bool hasClue3 = false;

	//decision 8
	bool hasClue4 = false;
	
	void part3() {
		vector<string> inventory3;

		//adding all items the player has so far
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

		//decision 7; moves on once clue 3 has been found.
		while (hasClue3 == false) {

			cin >> choice3; 

			switch (choice3) {
			case 1:
				cout << "You go over to the desks and take a look. You see cotton swabs and syringes, as well as\n";
				cout << "microscopes and other kinds of lab equipment. It seems like this is where the genetic material in\n";
				cout << "the jars you saw in Lab 2 came from, and the swabs and syringes are probably used to collect\n";
				cout << "samples. It seems like the microscopes and other machines are there to examine the results,\n";
				cout << "perhaps before and after the experiments are conducted- you\'re not completely sure.\n"; 
				break;
			case 2:
				cout << "You look at the enclosures, which are larger than those in the previous rooms. Inside each one,\n";
				cout << "you see an animal, with a label on the front of the enclosure. You shine your flashlight on the\n";
				cout << "label, and see that each is marked with the species and an identification number. As you examine\n";
				cout << "each enclosure, you notice that each animal matches the ones you saw on the jars of genetic\n";
				cout << "material in Lab 2. All the animals seem to be awake, but they don\'t appear to be genetically\n";
				cout << "modified or particularly hostile. They just back away from the light when it shines on them.\n";
				break;
			case 3:
				cout << "You pick up the paper on the top of the stack in the file folder and read it. Instead of a report,\n";
				cout << "it\'s a chart: \n";
				cout << " ---------------------------------------------\n";
				cout << "| TESTING LOG - XX-XX-XXXX                    |\n";
				cout << "| ROUND 1                                     |\n";
				cout << "|_____________________________________________|\n";
				cout << "| GENETIC MATERIAL SOURCE | AMOUNT | SUCCESS? |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Cat                     | 10 mg  | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Cat                     | 50 mg  | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Cat                     | 100 mg | Yes      |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Cat                     | 150 mg | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| ROUND 2                                     |\n";
				cout << "|_____________________________________________|\n";
				cout << "| GENETIC MATERIAL SOURCE | AMOUNT | SUCCESS? |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Tanuki                  | 10 mg  | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Tanuki                  | 50 mg  | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Tanuki                  | 100 mg | Yes      |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| Tanuki                  | 150 mg | No       |\n";
				cout << "|---------------------------------------------|\n";
				cout << "| NOTES: Both subjects in both rounds showed  |\n";
				cout << "| that 100 mg is the ideal amount. Do not     |\n";
				cout << "| use more.                                   |\n";
				cout << "|_____________________________________________|\n";
				cout << " \n";
				cout << "You glance at the other papers in the stack and see that they\'re all testing logs with results\n";
				cout << "similar to the ones you saw on the log you picked up.\n";

				inventory3.insert(inventory3.begin(), "testing log");
				cout << "Testing log has been added to your inventory.\n";
				hasClue3 = true;
				break;
			case 4:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory3.size(); i++) {
					cout << inventory3[i] << " " << "\n";
				} 
				break;
			default:
				cout << "Invalid option, please try again.\n";
				hasClue3 = false;
			}
		}

		cout << "With the testing report added to your bag, you go to the door marked \"Lab 4\" and swipe the key card.\n";
		cout << "The door opens, and you go into the lab.\n";
		cout << " \n";

		//ASCII art
		cout << "                                                        _____________\n";
		cout << "                                                       |  _________  |\n";
		cout << "                                                       | |  Lab 4  | |\n";
		cout << "                                                       | |_________| |\n";
		cout << "                                                       |        ___  |\n";
		cout << "                                                       |       |___| |\n";
		cout << "                                                       |             |\n";
		cout << "                                                       |             |\n";
		cout << "                                                       |             |\n";
		cout << "                                                       |             |\n";
		cout << "                                                       |_____________|\n";

		cout << " \n";
		cout << "Immediately after stepping into Lab 4, you notice that this lab is far bigger than the others, and you soon\n";
		cout << "realize why. While this lab has enclosures just like the rest, they\'re much bigger, and more like rooms\n";
		cout << "than enclosures for animals or plants, or whatever you saw in labs 1 and 2. Just like the other labs,\n";
		cout << "there are desks around the room with papers haphazardly scattered across them. You see test tubes\n";
		cout << "on a rack on one side of the room.\n";
		cout << "What do you want to do?\n";
		cout << "To examine the desks, press 1. To examine the test tubes, press 2. To examine the enclosures, press 3.\n";
		cout << "To check your inventory, press 4.\n";

		//decision 8; moves on once clue 4 has been found
		while (hasClue4 == false) {
			cin >> choice3;

			switch (choice3) {
			case 1:
				cout << "You go over to one of the desks and take a closer look. The papers appear to be experiment logs,\n";
				cout << "similar to the one you found in Lab 2. All the names and dates have been redacted or scratched out,\n";
				cout << "and you can\'t make out who they are. There are lots of them, all over the desks. How long has this\n";
				cout << "been going on?\n";
				hasClue4 = false;
				break;
			case 2:
				cout << "You look at the test tubes, which look similar to the ones you found in Lab 1. These also have\n";
				cout << "faded labels in neatly written Japanese. What they say is difficult to make out, but from what you\n";
				cout << "can read, they also contain genetic material from different organisms, but what exactly those\n";
				cout << "organisms are, you don\'t know.\n";
				hasClue4 = false;
				break;
			case 3:
				cout << "You walk to the back of the room. The enclosures in this room are much larger, and as you look in\n"; 
				cout << "each, you see that they both contain a couple mats for sleeping, but not much else. It seems like\n"; 
				cout << "people were staying in here. Were they experiment subjects? Right outside the enclosures, you notice\n"; 
				cout << "that each room has two cards with the names and physical information of the people who used to be\n"; 
				cout << "here. You can only make out a character or two in each name- ri here, tsu here, chi there,\n"; 
				cout << "and mi over there, but the writing\'s too faded to make out the full names. However, you can see\n";
				cout << "that each is marked as a \"subject\", which seems to confirm your suspiciions that the people here\n";
				cout << "were used as test subjects. Whoever they were, they\'re long gone. They were probably taken away\n";
				cout << "when the laboratory was abandoned. Was Tsumiko one of them? You take the cards from their places on\n";
				cout << "the wall outside the enclosures, hoping you\'ll be able to gather some information from them.\n";
				cout << " \n";

				inventory3.insert(inventory3.begin(), "information cards");
				cout << "Information cards have been added to your inventory.\n";
				hasClue4 = true;
				break;
			case 4:
				cout << "Your inventory contains:\n";
				for (int i = 0; i < inventory3.size(); i++) {
					cout << inventory3[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
			}
		}
	}
};