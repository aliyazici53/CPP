#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << "[ I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! ]" << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << "[ I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! ]" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << "[ I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. ]" << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << "[ This is unacceptable, I want to speak to the manager now. ]" << std::endl;
}

int  getLevel(std::string const &l)
{
    std::string const pool[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for (int i = 0; i < 4; i++)
        if (pool[i] == l)
            return i;
    return -1;
}

void Karen::complain(std::string level)
{
    int l = getLevel(level);   
    if (l == 0)
        this->debug();
    else if (l == 1)
        this->info();
    else if (l == 2)
        this->warning();
    else if (l == 3)
        this->error();
    else
        std::cout << "Error" << std::endl;
}