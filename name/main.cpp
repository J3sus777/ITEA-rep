#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <cstdlib>
#include <algorithm>

void GenerFile()
{
    std::mt19937 gen{ std::random_device()() };
    std::uniform_int_distribution<int>uid(0, 8);
    std::ofstream f("name.txt");
    if (!f.is_open())
    {
        std::cout << "error file";
    }
    else
    {
        std::vector<std::string>vc = { "Oleg","Galya","Timon","Pumba","Dima","Nataha","Roman","Lera","Grisha" };
        for (int i = 0; i < 5000; ++i)
        {
            f << vc[uid(gen)].c_str() << " ";

        }
        f.close();
    }
}

void Sort(std::vector<std::string>&vct)
{
    std::sort(vct.begin(), vct.end());
    std::ofstream g("sortname.txt");
    for (int i = 0; i < 5000; ++i)
    {
        g << vct[i].c_str() << " ";
    }
    g.close();
}

void ReadFile()
{
    std::ifstream l;
    l.open("name.txt");
    std::vector<std::string>vct(5000);
    for (int i = 0; i < 5000; ++i)
    {
        l >> vct[i];
    }
    l.close();
    Sort(vct);
}

int main()
{
    GenerFile();
    ReadFile();

    return 0;
}
