#include <iostream>
#include "pal.h"


    int main()
    {
        std::string s;
            std::getline(std::cin,s);
            Palindrom p;
            if (p(p.space(p.removeSpaces(s))))
                std::cout<<"Palindrom"<<std::endl;
            else
                std::cout<<"is NOT Palindrom"<<std::endl;
        return 0;
    }
