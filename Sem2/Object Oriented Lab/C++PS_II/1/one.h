#ifndef ONE_H_INCLUDED
#define ONE_H_INCLUDED
#include<string>
class Country
{
    std::string name;
    int population;
    int area;
    public:
    void get();
    std::string givename();
    int givepop();
    int givearea();
};

#endif // ONE_H_INCLUDED
