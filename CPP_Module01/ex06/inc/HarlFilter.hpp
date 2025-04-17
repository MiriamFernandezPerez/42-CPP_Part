#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP

#include <iostream>

class harlFilter
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        void complain(std::string level);
};

#endif