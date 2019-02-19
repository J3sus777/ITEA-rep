#pragma once
#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;

class Timer
{
private:
    time_point<steady_clock> Start,End;
    duration <float> Duration;
public:
    Timer()
    {
        Start = steady_clock::now();
    }
    ~Timer()
    {
        End= steady_clock::now();
        Duration=End-Start;
        float s=Duration.count()*1000.0f;
        std::cout<<"Time:= "<<s;
    }
};
