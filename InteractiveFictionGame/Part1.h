#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//part 1
class Part1 {
public:

	//user input
	int choice = 0;

	//decision 1
	bool hasKey = false;

	//decision 2
	bool doorOpen = false;

	//decision 3
	bool hasCode = false;
	bool hasReport = false;

	void part1() {

		vector<string> inventory;
		inventory.push_back("flashlight");

		cout << "You are Kaneshiro Momoe, an independent investigator. It\'s nighttime, and you\'re standing in front of the\n";
		cout << "Chiba National Laboratory for Botanical Research.\n";
		cout << "You\'ve been investigating the disappearance of 13 year old Tsumiko Mizunokura,\n";
		cout << "and your leads have led you to this lab, which was recently abandoned for unknown reasons.\n";
		cout << "You brought a flashlight with you, which was a good call, because it\'s pitch black inside.\n";

		//ASCII art
		cout << "    ------------------------------\n";
		cout << "    |  +=+=+=+=+=+=+=+=+=+=+=+=+  |\n";
		cout << "    |  Chiba National Laboratory  |\n";
		cout << "    |   for Botanical Research    |\n";
		cout << "    |  +=+=+=+=+=+=+=+=+=+=+=+=+  |\n";
		cout << "    ------------------------------\n";
		cout << " \n";

		cout << "What do you want to do?\n";
		cout << "To try and open the door, press 1. To look around, press 2. To look under the crates, press 3.\n";
		cout << "To check your inventory, press 4.\n";

		//decision 1; moves on once key has been found
		while (hasKey == false) {
			cin >> choice;

			if (choice == 1) {
				cout << "The door is locked. Maybe there\'s a key laying around somewhere.\n";
				hasKey = false;
			}
			else if (choice == 2) {
				cout << "There are a few crates laying around, but not much else besides the building.\n";
				cout << "The crates could have something hidden underneath.\n";
				hasKey = false;
			}
			else if (choice == 3) {
				cout << "You look under the crates, and you find a key hidden underneath.\n";
				hasKey = true;
				inventory.insert(inventory.begin(), "key");
				cout << "Key has been added to your inventory.\n";
			}
			else if (choice == 4) {
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory.size(); i++) {
					cout << inventory[i] << " " << "\n";
				}
			}
			else {
				cout << "Invalid option, please try again.\n";
				hasKey = false;
			}
		}

		cout << "Now that you\'ve found the key, maybe you can try opening the door again.\n";

		//ASCII art
		cout << " \n";
		cout << "  ---- \n";
		cout << " -     ----------- _\n";
		cout << "|  O  --- _  _  _  _|\n";
		cout << " -      -/ \\/ \\/ \\/\n";
		cout << "   ----\n";
		cout << " \n";

		cout << "What do you want to do?\n";
		cout << "To open the door, press 1. To check your inventory, press 2.\n";

		//decision 2; moves on once door has been opened
		while (doorOpen == false) {
			cin >> choice;

			if (choice == 1) {
				cout << "Using your flashlight to see, you insert the key into the lock and turn it.\n";
				cout << "The lock clicks open, and you walk inside the darkened laboratory.\n";
				doorOpen = true;
			}
			else if (choice == 3) {
				cout << "You ate the key. Why on earth did you decide to do that?\n";
				cout << "You\'re lucky there was another key hidden underneath the crates, but you better not try it again.\n";
				doorOpen = false;
			}
			else if (choice == 2) {
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory.size(); i++) {
					cout << inventory[i] << " " << "\n";
				}

			}
			else {
				cout << "Invalid option, please try again.\n";
				doorOpen = false;
			}
		}

		cout << "You walk through the hall. Papers, plant samples, and lab equipment are scattered about, as if\n";
		cout << "the inhabitants had to leave quickly. The hall is completely silent except for the sound of your footsteps.\n";
		cout << "You feel...unsettled. As you walk, you end up in front of a door with a combination lock on it. It looks\n";
		cout << "like the lock has a four digit code that you need to enter before you can continue.\n";
		cout << " \n";

		//ASCII art
		cout << "     _----_\n";
		cout << "    / ---- \\\n";
		cout << " __/_/____\\_\\__\n";
		cout << "/ _-_-_-_-_-_-_ \\\n";
		cout << "|   _  _  _  _   |\n";
		cout << "|  |_||_||_||_|  |\n";
		cout << "| _-_-_-_-_-_-_  |\n";
		cout << "|________________|\n";

		cout << " \n";
		cout << "What do you want to do?\n";
		cout << "To look around, press 1. To read the lab report, press 2. To enter the code, press 3. To check your inventory,\n";
		cout << "press 4. To leave the laboratory, press 5.\n";

		//decision 3; moves on once code for the lock has been found
		while (hasCode == false) {
			cin >> choice;

			if (choice == 1) {
				cout << "There\'s a lab report laying on a desk, as well as microscopes, petri dishes, plant samples, pipettes,\n";
				cout << "and half-filled flasks filled with a mysterious green-blue liquid.\n";

				hasReport = true;
				hasCode = false;

				inventory.insert(inventory.begin(), "lab report");
				cout << "Lab report has been added to your inventory.\n";
			}
			else if (choice == 2 && hasReport == false) {
				cout << "You need to find the lab report before you can read it.\n";
			}
			else if (choice == 2 && hasReport == true) {
				cout << "You pick up the lab report. It reads:\n";
				cout << " -------------------------------------------\n";
				cout << "| EXPERIMENT LOG: #32500                    |\n";
				cout << "| SUBJECT: XXXXXXX XXXXXXXXXX               |\n";
				cout << "| DATE: X5/2X/XX08                          |\n";
				cout << "|                                           |\n";
				cout << "| EXPERIMENT: Subject was exposed to        |\n";
				cout << "| [REDACTED] for a brief period of          |\n";
				cout << "| time. [REDACTED] immediately took hold,   |\n";
				cout << "| but subject did not react well.           |\n";
				cout << "|                                           |\n";
				cout << "| RESULTS: After X minutes of exposure,     |\n";
				cout << "| subject began fighting back against       |\n";
				cout << "| [REDACTED] and continued to do so until   |\n";
				cout << "| researchers physically restrained the     |\n";
				cout << "| physically restrained the subject.        |\n";
				cout << "| Dr. [REDACTED] decided to call off the    |\n";
				cout << "| experiment early. The experiment will     |\n";
				cout << "| continue after subject has had time to    |\n";
				cout << "| calm down.                                |\n";
				cout << "|                                           |\n";
				cout << " -------------------------------------------\n";
			}
			else if (choice == 3) {
				cout << "Enter the code: ";
				cin >> choice;

				if (choice == 5208) {
					cout << "You enter the code, and the lock springs open. You remove the lock from the door and stand in\n";
					cout << "front of the door, contemplating your next steps.\n";

					hasCode = true;
				}
				else {
					cout << "You enter a code, but the lock doesn't open. It seems like that code is incorrect.\n";

					hasCode = false;
				}
			}
			else if (choice == 4) {
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory.size(); i++) {
					cout << inventory[i] << " " << "\n";
				}
			}
			else if (choice == 5) {
				cout << "You can\'t just leave now and give up on Tsumiko, you need to find more clues to find her.\n";
			}
		}
	}
};