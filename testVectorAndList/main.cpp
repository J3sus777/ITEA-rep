#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <numeric>
#include <algorithm>
#include "timer.h"

int main()
{

    std::cout<<"\nVECTOR"<<std::endl;
    std::vector<int>vc(100000);
    std::iota(vc.begin(),vc.end(),0);
    Timer*time=new Timer;
    vc.insert(vc.begin(),444);
    auto its=vc.begin();
    std::advance(its,vc.size()/2);
    vc.insert(its,333);
    vc.insert(vc.end(),444);
    vc.erase(vc.begin());
    auto it=std::find(vc.begin(),vc.end(),333);
    if(it!=vc.end())
        vc.erase(it);
    vc.pop_back();
    delete time;
    std::cout<<std::endl;



    std::cout<<"\nLIST"<<std::endl;
    std::list<int>ls(100000);
    std::iota(ls.begin(),ls.end(),0);
    Timer*timer=new Timer;
    ls.push_front(111);
    auto iter=ls.begin();
    std::advance(iter,ls.size()/2);
    ls.insert(iter,666);
    ls.push_back(111);
    ls.pop_front();
    auto ite=std::find(ls.begin(),ls.end(),666);
    if(ite!=ls.end())
       ls.erase(ite);
    ls.pop_back();
    delete timer;
    std::cout<<std::endl;
    return 0;
}
