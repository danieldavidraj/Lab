#ifndef FOUR_H_INCLUDED
#define FOUR_H_INCLUDED

class Time
{
    int hour;
    int minute;
    int second;
    public:
        void add(Time&,Time&);
        void print();
        Time()
        {
            hour=0;
            minute=0;
            second=0;
        }
        Time(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
};

#endif // FOUR_H_INCLUDED
