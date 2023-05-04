#include "Zombie.hpp"

Zombie* newZombie( std::string name ) 
{
    return (new Zombie(name));
}

void randomChump( std::string name ) 
{
    Zombie zombie(name);
    zombie.announce();
}

int main() 
{
    Zombie z1("AntonIO");
    z1.announce();

    Zombie *z2 = newZombie("Tumbler");
    z2->announce();
    
    randomChump("Biter");
    
    delete z2;
    
    return 0;
}
