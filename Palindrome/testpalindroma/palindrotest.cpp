#include "palindrotest.h"

palindrotest::palindrotest()
{

}

bool palindrotest::operator ()(std::string s)
{
    return (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) ? true : false;
}

std::string palindrotest::removeSpaces(std::string s)
{
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
       return (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) ? s : " ";
}
std::string palindrotest::space(std::string s)
{
    if(s.size()==0)
        s.erase(std::remove(s.begin(),s.end(),' '),s.end());
        return (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) ? s : " ";
}
bool palindrotest::Biglatter(std::string s)
{
    std::string symbols= "QWERTYUIOPASDFGHJKLZXCVBNM";
    std::string::iterator it;

    for(it = s.begin(); it!=s.end(); ++it){
       if(std::find(symbols.begin(),symbols.end(),*it)!=symbols.end()){
           return false;
       }
    }
    return true;
}
bool palindrotest::Simbols(std::string s)
{
    std::string marks= "~!@#$%^&*()_+}{[]}/*-+/ '<>?`";
    std::string::iterator it;

    for(it = s.begin(); it!=s.end(); ++it){
       if(std::find(marks.begin(),marks.end(),*it)!=marks.end()){
           return false;
       }
    }
    return true;
}
