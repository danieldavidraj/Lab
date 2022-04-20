#ifndef TWO_H_INCLUDED
#define TWO_H_INCLUDED
class Employee
{
    public:
    std::string name;
    int id;
    std::string department;
    std::string position;
    Employee(std::string,int,std::string,std::string);
    Employee(std::string,int);
    Employee():id(0){}
};

#endif // TWO_H_INCLUDED
