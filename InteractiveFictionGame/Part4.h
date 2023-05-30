#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Part4 {
public:
	//user input
	int choice4 = 0;

	//decision 9
	bool code1Correct = false;
	bool code2Correct = false;

	//decision 10
	bool doorBarricaded1 = false;
	bool doorBarricaded2 = false;

	void part4() {
		vector<string> inventory4;

		//adding all items the player has so far
		inventory4.push_back("flashlight");
		inventory4.insert(inventory4.begin(), "key");
		inventory4.insert(inventory4.begin(), "lab report");
		inventory4.insert(inventory4.begin(), "key card");
		inventory4.insert(inventory4.begin(), "lab 1 letter");
		inventory4.insert(inventory4.begin(), "lab report 2");
		inventory4.insert(inventory4.begin(), "testing log");
		inventory4.insert(inventory4.begin(), "information cards");

		cout << "You\'ve found more clues, but you still have many questions. You leave Lab 4 and walk down the hallway\n";
		cout << "until you reach another locked door. It\'s blocked by rubble. You\'re able to move the rubble out of the\n";
		cout << "way, but you see that the door is secured with two combination locks, which look the same as the one you\n";
		cout << "saw on the previous hallway door. Maybe the combinations are hidden around here somewhere.\n";
		cout << " \n";

		//ASCII art
		cout << "      _----_               _----_\n";
		cout << "     / ---- \\             / ---- \\\n";
		cout << "  __/_/____\\_\\__       __/_/____\\_\\__\n";
		cout << "/ _-_-_-_-_-_-_ \\    / _-_-_-_-_-_-_ \\\n";
		cout << "|   _  _  _  _   |   |   _  _  _  _   |\n";
		cout << "|  |_||_||_||_|  |   |  |_||_||_||_|  |\n";
		cout << "| _-_-_-_-_-_-_  |   | _-_-_-_-_-_-_  |\n";
		cout << "|________________|   |________________|\n";

		cout << " \n";
		cout << "What do you want to do?\n";
		cout << "To look around, press 1. To examine the writing, press 2. To examine the papers, press 3. To enter the\n";
		cout << "codes, press 4. To check your inventory, press 5.\n";

		//decision 9; moves on once the player has entered both correct codes
		while (code1Correct == false && code2Correct == false) {
			cin >> choice4;

			switch (choice4) {
			case 1:
				cout << "Looking around the hallway, you see some papers scattered on the floor and what seems to be\n";
				cout << "writing scrawled on the wall.\n";
				code1Correct = false; 
				code2Correct = false;
				break;
			case 2:
				cout << "You take a closer look at the small, messy writing and realize that it seems to be written in\n";
				cout << "binary. It says \"1001010100000010\". You think it might be one of the codes, but you\'re not sure\n";
				cout << "what it says. Maybe there\'s something around here that could help you decode it.\n";
				code1Correct = false;
				code2Correct = false;
				break;
			case 3:
				cout << "You look at one of the papers. It seems to be a chart, for decoding binary numbers:\n";
				cout << " --------------------------\n";
				cout << "|   Decimal   |   Binary   |\n";
				cout << "|--------------------------|\n";
				cout << "| 0           | 0000       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 1           | 0001       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 2           | 0010       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 3           | 0011       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 4           | 0100       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 5           | 0101       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 6           | 0110       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 7           | 0111       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 8           | 1000       |\n";
				cout << "|-------------|------------|\n";
				cout << "| 9           | 1001       |\n";
				cout << " --------------------------\n";
				cout << " \n";

				inventory4.insert(inventory4.begin(), "binary chart");
				cout << "Binary chart has been added to your inventory.\n";

				cout << "That will help decode combination, but you still need to find the other. Then, you look at one\n";
				cout << "of the other papers, and you notice that in one of the corners, there\'s faded red writing that\'s\n";
				cout << "also in binary. This one says \"0100011010000111\". That should give you the other code, but\n";
				cout << "you\'re still not sure which code unlocks which lock. Be careful, you\'ve only got two tries\n";
				cout << "for lock 2.\n";
				break;
			case 4:
				cout << "Enter the code for lock 1: ";
				cin >> choice4;

				if (choice4 == 4687) {
					cout << "You enter the code, and lock 1 clicks open.\n";
					code1Correct = true;
					cout << "Enter the code for lock 2: ";
					cin >> choice4;

					if (choice4 == 9502) {
						cout << "You enter the code, and lock 2 clicks open. You can now open the door.\n";
						code2Correct = true;
					}
					else {
						cout << "You enter a code, but the lock doesn\'t open. It seems like that isn\'t the right code.\n";
						cout << "Try again: ";
						cin >> choice4;

						if (choice4 == 9502) {
							cout << "You enter the code, and lock 2 clicks open.\n";
						}
						code2Correct = false;
					}
				}
				break;
			case 5:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory4.size(); i++) {
					cout << inventory4[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
			}
		}

		cout << " \n";
		cout << "With both locks open, you carefully remove them and open the door. However, right as you\'re about to\n";
		cout << "step through the doorway, you hear a crash and loud banging noises. Could the animals have gotten out? Or\n";
		cout << "did you wake the plants? But how could the plants have gotten out, much less move? You\'re not sure what\n";
		cout << "happened, but you know you need to keep moving, and fast, before whatever\'s loose breaks through the\n";
		cout << "doors. You run through the doorway and shut the door behind you. You need to find something to barricade\n";
		cout << "the door with.\n";
		cout << " \n";

		//ASCII art
		cout << " __________________ \n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|              ( ) |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|                  |\n";
		cout << "|__________________|\n";

		cout << " \n";
		cout << "What do you want to do?\n";
		cout << "To look around, press 1. To examine the tables, press 2. To examine the pots, press 3. To examine the lab\n";
		cout << "equipment, press 4. To check your inventory, press 5.\n";

		//decision 10; moves on once door has been barricaded
		while (doorBarricaded1 == false || doorBarricaded2 == false) {
			cin >> choice4;

			switch (choice4) {
			case 1:
				cout << "There are several sturdy tables and pots in the hallway, as well as some lab equipment, including\n";
				cout << "microscopes and other materials.\n";
				doorBarricaded1 = false;
				doorBarricaded2 = false;
				break;
			case 2:
				cout << "You go over to the tables. They\'re sturdy and heavy. These should be good for barricading the\n";
				cout << "door. With great difficulty, you drag a couple over to the door, pushing them up against it.\n";
				doorBarricaded1 = true;
				break;
			case 3:
				cout << "There are some ceramic pots of various sizes in the hallway. Maybe they\'re for holding plants.\n";
				cout << "In any case, they seem heavy enough to hold the door, so you pick out a couple of the larger ones\n";
				cout << "and put them against the door.\n";
				doorBarricaded2 = true; 
				break;
			case 4:
				cout << "You look at the lab equipment, but all of it\'s fairly small and you don\'t think it\'ll do much\n";
				cout << "to hold the door.\n";
				break;
			case 5:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory4.size(); i++) {
					cout << inventory4[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
			}
		}

		cout << "The door\'s barricaded, but it won\'t hold forever. You still hear the banging from the other hallway, and it\'s\n";
		cout << "getting louder. You need to hurry and get out of here. You begin running down the darkened, winding hallway,\n";
		cout << "with more labs containing who knows what. After you\'ve been running for a while, you hear a crash. It sounds\n";
		cout << "like whatever\'s escaped has broken through the door. You know you shouldn\'t look, but you glance over your\n";
		cout << "shoulder to see a terrifying sight. It seems like the plants have somehow attached themselves to the animals,\n";
		cout << "and that\'s how they\'re moving. The animals themselves look terrified, as though they don\'t understand what\'s\n";
		cout << "going on and aren\'t in control of their actions. The exit is close- you can see a red EXIT sign glowing in the\n";
		cout << "darkness at the end of the hallway.\n";
		cout << " \n";

		//ASCII art
		cout << " _______________\n";
		cout << "||-------------||\\ \n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||             || |\n";
		cout << "||_____________|| |\n";
		cout << "                 \\|\n";

		cout << " \n";
		cout << "What do you want to do?\n";
		cout << "To keep running, press 1. To fight back, press 2.\n";

		cin >> choice4;

		switch (choice4) {
		case 1:
			cout << "You keep running as fast as your legs can carry you toward the exit sign, which slowly gets closer. The\n";
			cout << "creatures are gaining on you, but you think you can make it. With one final push, you make it out just in\n";
			cout << "time, slamming the door behind you and barricading it with crates lying around outside the lab.\n";
			break;
		case 2:
			cout << "You turn to face the creatures. They stop, staring at you. You don\'t have any weapons, so you grab pieces of\n";
			cout << "debris laying around and throw them at the creatures. They don\'t seem fazed. You grab a larger piece and\n";
			cout << "swing it at the creatures. That, at least, seems to surprise them. They back away, and you take their moment\n";
			cout << "of hesitation as an opportunity to run. You sprint as fast as you can to the exit, and make it out, slamming\n";
			cout << "the door behind you and barricading it with crates lying around outside the lab.\n";
			break;
		default:
			cout << "Invalid option, please try again.\n";
		}

		cout << "You still hear banging, but you get in your car and drive away to ensure they don\'t keep coming after you. You\n";
		cout << "didn\'t find Tsumiko, but you did find leads that you need to look into that will hopefully bring you closer to\n";
		cout << "finding her. You plan to contact some friends who can help you, but for now, you need to rest.\n";
		cout << " \n";
		cout << "+=+=+=+=+ The End +=+=+=+=+\n";

	}
};