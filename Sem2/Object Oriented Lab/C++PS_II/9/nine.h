#ifndef NINE_H_INCLUDED
#define NINE_H_INCLUDED

class Coord
{
    double xval;
    double yval;
    public:
    Coord();
    void display();
    friend void convPol(Coord);
};

#endif // NINE_H_INCLUDED
