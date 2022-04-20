#ifndef TWO_H_INCLUDED
#define TWO_H_INCLUDED

class Donor
{
    public:
    int number;
    std::string name;
    int age;
    std::string address;
    std::string sex;
    std::string blood;
    void get();
    void display(std::string);
    void display(int);
    void display(std::string,std::string,int);
};

#endif // TWO_H_INCLUDED
