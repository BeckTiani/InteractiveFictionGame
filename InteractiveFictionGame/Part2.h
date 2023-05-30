#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Part2 {
public:

	//user input
	int choice2 = 0;

	//decision 4
	bool hasKeyCard = false;

	//decision 5
	bool hasClue1 = false;

	//decision 6
	bool hasClue2 = false;

	void part2() {

		vector<string> inventory2;

		//adding all items the player has so far
		inventory2.push_back("flashlight");
		inventory2.insert(inventory2.begin(), "key");
		inventory2.insert(inventory2.begin(), "lab report");

		cout << "You walk through the now-opened door into another hallway that looks strikingly similar to the one you\n";
		cout << "just passed through, except this one has four doors, which seem to lead to what you think are labs.\n";
		cout << "You try to look into one of the windows to the labs, but it's too dark to see anything. You\'ll have to\n";
		cout << "find a way inside to investigate. You take a closer look at the doors, and notice that they seem to\n";
		cout << "require a key card to enter. If you can get into the labs, maybe you can find more clues there.\n";
		cout << " \n";

		//ASCII art
		cout << "     _____________    _____________    _____________    _____________ \n";
		cout << "    | ----------- |  | ----------- |  | ----------- |  | ----------- |\n";
		cout << "    | |  Lab 1  | |  | |  Lab 2  | |  | |  Lab 3  | |  | |  Lab 4  | |\n";
		cout << "    | |_________| |  | |_________| |  | |_________| |  | |_________| |\n";
		cout << "    |        ___  |  |        ___  |  |        ___  |  |        ___  |\n";
		cout << "    |       |___| |  |       |___| |  |       |___| |  |       |___| |\n";
		cout << "    |             |  |             |  |             |  |             |\n";
		cout << "    |             |  |             |  |             |  |             |\n";
		cout << "    |             |  |             |  |             |  |             |\n";
		cout << "    |             |  |             |  |             |  |             |\n";
		cout << "    |_____________|  |_____________|  |_____________|  |_____________|\n";

		cout << " \n";
		cout << "What do you want to do?\n";
		cout << "To look around, press 1. To look through the lab equipment, press 2. To look under the papers, press 3.\n";
		cout << "To look under the plants, press 4. To check your inventory, press 5.\n";

		//decision 4; moves on once player has found the key card
		while (hasKeyCard == false) {
			cin >> choice2;

			switch (choice2) {
			case 1:
				cout << "Just like in the other hallway, there's lab equipment and papers scattered about, along with\n";
				cout << "some plants.\n";
				break;
			case 2:
				cout << "You examine the various pieces of lab equipment laying around, but you don\'t find anything helpful.\n";
				hasKeyCard = false;
				break;
			case 3:
				cout << "You shuffle through the papers, but you don\'t find anything of interest.\n";
				hasKeyCard = false;
				break;
			case 4:
				cout << "You examine each plant and the pot it\'s in. Some seem to be abnormally large, or have odd\n";
				cout << "colors that don\'t occur naturally in plants. Are some of them...moving? No, it can't be.\n";
				cout << "It's probably just a draft. It is a bit cold in here. While examining the plants, you find\n";
				cout << "what looks like a key card hidden underneath one of the pots.\n";
				inventory2.insert(inventory2.begin(), "key card");

				cout << "Key card has been added to your inventory.\n";
				hasKeyCard = true;
				break;
			case 5:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory2.size(); i++) {
					cout << inventory2[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
			}
		}

		cout << "You found the key card. Now you can explore the labs and find clues.\n";

		//ASCII art
		cout << " \n";
		cout << " ___________________________\n";
		cout << "|___________________________|\n";
		cout << "|_/_/_/_/_/_/_/_/_/_/_/_/_/_|\n";
		cout << "|                           |\n";
		cout << "| Access Level: 5           |\n";
		cout << "|                           |\n";
		cout << "|---------------------------|\n";
		cout << "|___________________________|\n";
		cout << " \n";

		cout << "You decide to enter Lab 1 first. You swipe the key card and go through the door marked \"Lab 1\".\n";
		cout << " \n";

		//ASCII art
		cout << "   _____________\n";
		cout << "  | ----------- |\n";
		cout << "  | |  Lab 1  | |\n";
		cout << "  | |_________| |\n";
		cout << "  |        ___  |\n";
		cout << "  |       |___| |\n";
		cout << "  |             |\n";
		cout << "  |             |\n";
		cout << "  |             |\n";
		cout << "  |             |\n";
		cout << "  |_____________|\n";

		cout << " \n";
		cout << "Inside, you see several enclosures made out of thick plexiglass, each containing a plant. There are\n";
		cout << "also a few letters and notes laying on a desk and test tubes containing various colored liquids.\n";
		cout << "What do you want to do?\n";
		cout << "To examine the enclosures, press 1. To examine the letters, press 2. To examine the test tubes, press 3.\n";
		cout << "To check your inventory, press 4.\n";

		//decision 5; moves on once clue 1 has been found
		while (hasClue1 == false) {
			cin >> choice2;

			switch (choice2) {
			case 1:
				cout << "The plants look carnivorous, but not like anything you\'ve ever seen or heard of. These look\n";
				cout << "like mutated versions of normal carniverous plants. Some have large, sharp teeth, others have\n";
				cout << "long tentacles, and others are covered in spikes. They appear to be dormant, but you don'\t want\n";
				cout << "to take any chances.\n";
				hasClue1 = false; 
				break;
			case 2:
				cout << "You pick up one of the letters laying on the desk. It reads:\n";
				cout << "-----------------------------------------\n";
				cout << "| Dear Dr. [REDACTED],                   |\n";
				cout << "| I know that this experiment began      |\n";
				cout << "| with good intentions, but this needs   |\n";
				cout << "| to stop. It\'s gone too far. The        |\n";
				cout << "| ongoing study of XXXXXXX XXXXXXXXXX    |\n";
				cout << "| should make this clear. If you do not  |\n";
				cout << "| reconsider this experiment and its     |\n";
				cout << "| ethics, I will have to leave the       |\n";
				cout << "| project. I\'ve shared my concerns with  |\n";
				cout << "| [REDACTED] and [REDACTED], but they    |\n";
				cout << "| refuse to listen. You\'re my last       |\n";
				cout << "| hope to prevent the catastrophic       |\n";
				cout << "| results that I expect will happen if   |\n";
				cout << "| the experiment doesn\'t end now.        |\n";
				cout << "| I beg of you, please take action       |\n";
				cout << "| before it\'s too late.                  |\n";
				cout << "| Yours,                                 |\n";
				cout << "| Dr. [REDACTED]                         |\n";
				cout << "|________________________________________|\n";
				cout << " \n";
				cout << "You wonder what the experiment in question is. Could it have something to do with Tsumiko?\n";
				cout << "You\'ll need to find more clues to figure out what was going on in this lab.\n";

				inventory2.insert(inventory2.begin(), "lab 1 letter");
				cout << "Letter has been added to your inventory.\n";
				hasClue1 = true;
				break;
			case 3:
				cout << "You take a closer look at the test tubes. Some seem to be some sort of growth hormone, and others,\n";
				cout << "based on their labels written in neat Japanese, contain genetic material from other organisms.\n";
				cout << "Were they trying to genetically modify the plants? What could the goal possibly be if the results\n";
				cout << "look like this? What kind of organisms did they use? You have a million questions, but no answers.\n";

				hasClue1 = false;
				break;
			case 4:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory2.size(); i++) {
					cout << inventory2[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
				hasClue1 = false;
			}
		}

		cout << "Next, you decide to move on to Lab 2. You swipe the key card and go through the door marked \"Lab 2\".\n";
		cout << " \n";

		//ASCII art
		cout << "                      _____________    \n";
		cout << "                     |  _________  |\n";
		cout << "                     | |  Lab 2  | |\n";
		cout << "                     | |_________| |\n";
		cout << "                     |        ___  |\n";
		cout << "                     |       |___| |\n";
		cout << "                     |             |\n";
		cout << "                     |             |\n";
		cout << "                     |             |\n";
		cout << "                     |             |\n";
		cout << "                     |_____________|\n";
		
		cout << " \n";
		cout << "Similar to Lab 1, this lab also has thick plexiglass enclosures with each containing a plant and lab\n";
		cout << "reports laying on the various desks scattered around the room. On a shelf labeled \"Genetic Material\",\n";
		cout << "there are several jars, each with a neatly written label in Japanese.\n";
		cout << "What do you want to do?\n";
		cout << "To examine the plants, press 1. To examine the jars, press 2. To examine the lab reports, press 3.\n";
		cout << "To check your inventory, press 4.\n";

		//decision 6; moves on once clue 2 has been found
		while (hasClue2 == false) {
			cin >> choice2;

			switch (choice2) {
			case 1:
				cout << "You slowly and quietly approach the enclosures and examine the plants inside. You notice that\n";
				cout << "these plants look much different than the ones in Lab 1. They have animal characteristics, or\n";
				cout << "plant characteristics that have adapted to behave like their animal counterparts.\n";
				cout << "Some of the plants have large leaves to act as \"arms\" or \"tails\", some have different types\n";
				cout << "of animal ears, and all seem to have eyes incorporated somewhere into the plant. They all appear\n";
				cout << "to be sleeping right now, but you\'re not sure how easily they\'ll wake up, nor are you sure\n";
				cout << "what they can do.\n";
				hasClue2 = false;
				break;
			case 2:
				cout << "Although the labels are starting to fade slightly, they\'re still readable. According to the\n";
				cout << "labels, each contains genetic material from a different animal. Scanning the jars, you see ones\n";
				cout << "containing genetic material from cats, dogs, tanuki, mongooses, frogs, and crabs, among others.\n";
				cout << "It seems like this is what was used to give the plants their animal characteristics.\n";
				hasClue2 = false;
				break;
			case 3: 
				cout << "You pick up one of the lab reports laying on a desk. It reads:\n";
				cout << " ---------------------------------------------\n";
				cout << "| EXPERIMENT LOG: #49085                      |\n";
				cout << "| SUBJECTS: [REDACTED], [REDACTED]            |\n";
				cout << "| DATE: XX/XX/XXXX                            |\n";
				cout << "|                                             |\n";
				cout << "| EXPERIMENT: [REDACTED] and [REDACTED] were  |\n";
				cout << "| combined with [DATA EXPUNGED] for a short   |\n";
				cout << "| period of time. After a brief delay,        |\n";
				cout << "| [DATA EXPUNGED] took effect on both         |\n";
				cout << "| [REDACTED] and [REDACTED].                  |\n";
				cout << "|                                             |\n";
				cout << "| RESULTS: As a result of combining           |\n";
				cout << "| [REDACTED] and [REDACTED] with [DATA        |\n";
				cout << "| EXPUNGED], both subjects developed          |\n";
				cout << "| [DATA EXPUNGED] and became noticeably       |\n";
				cout << "| more hostile. It was also noted that        |\n";
				cout << "| both subjects are now diurnal, despite      |\n";
				cout << "| [DATA EXPUNGED]\'s original sleep patterns.  |\n";
				cout << "| At night, subjects enter a \"sleep\" state,   |\n";
				cout << "| and are easily subdued and less hostile.    |\n";
				cout << "|                                             |\n";
				cout << "|_____________________________________________|\n";

				inventory2.insert(inventory2.begin(), "lab report 2");
				cout << "Lab report 2 has been added to your inventory.\n";
				cout << "You also see a note attached to the top of the lab report, which says \"Notice to all personnel:\"";
			 	cout << "Do not disturb or remove plants from their enclosures unless you are wearing the proper safety\n";
				cout << "equipment. Plants may only be handled by personnel with security level 7 or higher.\"\n";
				hasClue2 = true;
				break;
			case 4:
				cout << "Your inventory contains: \n";
				for (int i = 0; i < inventory2.size(); i++) {
					cout << inventory2[i] << " " << "\n";
				}
				break;
			default:
				cout << "Invalid option, please try again.\n";
				hasClue2 = false;
			}
		}
	}
};