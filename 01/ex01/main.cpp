#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0)
		return NULL;
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
	    std::string tmpName = name + "_" + std::to_string(i+1);
	    Horde[i] = Zombie(tmpName);
    }
    return Horde;
}

int main()
{
    int N = 6;
    Zombie *Horde = zombieHorde(N, "Roamer");
    if (Horde == NULL)
		return (EXIT_FAILURE);
    for (int i =0; i<N; ++i)
        Horde[i].announce();
    delete[] Horde;
    return (EXIT_SUCCESS);
}
