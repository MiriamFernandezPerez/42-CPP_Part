#include "../inc/Replacer.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }

    Replacer replacer(filename, s1, s2);
    if (!replacer.process())
    {
        std::cerr << "Error: Replacement failed." << std::endl;
        return (1);
    }

    return (0);
}
