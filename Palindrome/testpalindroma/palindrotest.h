#pragma once
#include <string>
#include <algorithm>

class palindrotest {
public:
    palindrotest();
    bool operator ()(std::string s);
    std::string removeSpaces (std::string s);
    std::string space(std::string s);
    bool Biglatter(std::string s);
    bool Simbols(std::string s);
};
