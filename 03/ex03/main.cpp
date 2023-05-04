#include "DiamondTrap.hpp"

int main() {
	
	std::cout << "************************* Testing FragTrap *************************" << std::endl;
	DiamondTrap dt("frag");
	dt.whoAmI();
	std::cout << std::endl << dt << std::endl;

	dt.attack("Eric");
	dt.takeDamage(10);
	dt.beRepaired(15);

    return 0;
}