#include "Replacer.hpp"
#include <fstream>
#include <iostream>

Replacer::Replacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool Replacer::process()
{
    // Convert _filename into a const char*
    std::ifstream infile(_filename.c_str());  
    if (!infile) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return (false);
    }

    // Convert _filename + ".replace" into a const char*
    std::ofstream outfile((_filename + ".replace").c_str());  
    if (!outfile) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return (false);
    }

    std::string line;
    while (std::getline(infile, line)) {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
            pos += _s2.length();
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
    return (true);
}