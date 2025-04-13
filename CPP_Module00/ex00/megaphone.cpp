#include <iostream>
#include <cstring>

std::string toUpperCase(const char *str)
{
    size_t i;
    std::string res;

    i = 0;
    while (str[i])
    {
        res+= toupper(str[i]);
        i++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i++;
        while (i < ac)
        {
            std::cout << toUpperCase(av[i]);
            if (i != ac - 1)
                std::cout << " "; 
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}