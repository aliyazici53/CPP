#include "PhoneBook.h"

int main() {
	bool isRunning = true;
	PhoneBook PhoneBook;
	std::string input;

	std::cout << "-*- Phonebook -*-" << std::endl;

	while(isRunning) {
		std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl << ">";
		std::getline(std::cin, input);
		if(input == "ADD") {
			PhoneBook.addContact();
			std::cout << "Contact has been added!" << std::endl;
		}
		else if(input == "SEARCH")
			PhoneBook.searchContact();
		else if(input == "EXIT") {
			std::cout << "Exiting... " << std::endl;
			isRunning = false;
		} else
			std::cout << "Please enter a valid command!" << std::endl;
	}
	return 0;
}