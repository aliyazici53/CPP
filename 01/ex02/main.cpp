#include <string>
#include <iostream>

int main() 
{

    //define str
    std::string str = "HI THIS IS BRAIN";
    
    //initialize
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    //display
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}
