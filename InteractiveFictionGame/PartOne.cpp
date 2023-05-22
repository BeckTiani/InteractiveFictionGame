#include <iostream>

class PartOne {
public:
	std::string userInput;

	PartOne(std::string input) {
		userInput = input;
	}

	void opening(std::string input);
		
};

void PartOne::opening(std::string input) {
	std::cout << "hello";
}