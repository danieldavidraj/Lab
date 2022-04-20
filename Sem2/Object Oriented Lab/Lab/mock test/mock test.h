#ifndef MOCK_TEST_H_INCLUDED
#define MOCK_TEST_H_INCLUDED

class Event
{
    char name[20];
    public:
    void getname();
    void printname();
};
class Participant
{
    public:
    char name[20];
    char college[20];
    static int number;
    Participant();
};
class Date
{
    public:
    int day;
    int month;
    int year;
};
class Time
{
    public:
    int hour;
    int min;
    int sec;
};
class Number
{
    public:
    int number;
};


#endif // MOCK_TEST_H_INCLUDED
