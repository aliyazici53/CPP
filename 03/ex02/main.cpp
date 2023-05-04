#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {

	std::cout << std::endl << "------ Constructing a ScavTrap ------" << std::endl;

	FragTrap fragTrapJon("Jean");
	std::cout << fragTrapJon;

	fragTrapJon.attack("Eric");
	fragTrapJon.beRepaired(5);
	fragTrapJon.takeDamage(10);

	std::cout << fragTrapJon << std::endl;
	fragTrapJon.highFivesGuys();

	fragTrapJon.takeDamage(200);
	std::cout << fragTrapJon;
    return 0;
}