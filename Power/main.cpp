#include <iostream>
#include <cmath>
struct Pow {
    void step(int choise, int step)
    {
        int result = 1;
        for (int i = 1; i <= step; i++)
            result *= choise;
        std::cout << result;
    }
};
int main()
{
    int choise;
    int step;
    std::cin >>choise;
    std::cin >>step;
    Pow p;
    p.step(choise,step);
    std::cout<<std::endl;
    return 0;
}
