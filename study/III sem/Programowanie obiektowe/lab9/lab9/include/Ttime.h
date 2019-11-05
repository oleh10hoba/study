#ifndef TTIME_H
#define TTIME_H

#include <iostream>

using namespace std;

class Ttime
{
    public:
        Ttime(int hh, int mm);
        ~Ttime();
        Ttime operator+(Ttime czas);
        Ttime operator-(Ttime czas);
        void wyswietl();

         friend ostream & operator<< (ostream &wyjscie, const Ttime &czas);

        friend operator*(Ttime czas, int n);

    protected:

    private:
        int godziny,minuty;
};

#endif // TTIME_H
