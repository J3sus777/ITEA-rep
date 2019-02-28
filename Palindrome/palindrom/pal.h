#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
class Palindrom {
public:
   bool operator()(std::string s)
    {
        return (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) ? true : false;
    }
    std::string removeSpaces(std::string s)
    {
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
        return s;
    }
    std::string space(std::string s)
    {
        if(s.size()==0)
            s.erase(std::remove(s.begin(),s.end(),' '),s.end());
            return s;
    }
};
