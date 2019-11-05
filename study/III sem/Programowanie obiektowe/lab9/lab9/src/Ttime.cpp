#include "Ttime.h"

Ttime::Ttime(int hh, int mm)
{
    godziny=hh;
    minuty=mm;
    while (minuty >=60)
    {
        godziny++;
        minuty-=60;
    }

}

Ttime::~Ttime()
{

}

Ttime Ttime::operator+(Ttime czas)
{
    Ttime suma(0,0);
    suma.minuty = czas.minuty + minuty;
    while (suma.minuty >=60)
    {
        suma.godziny++;
        suma.minuty-=60;
    }
    suma.godziny = czas.godziny + godziny;
    return suma;

}

Ttime Ttime::operator-(Ttime czas)
{
    Ttime roznica(0,0);
    roznica.godziny = godziny - czas.godziny;
    roznica.minuty = minuty - czas.minuty;
    while (roznica.minuty < 0)
    {
        roznica.godziny--;
        roznica.minuty+=60;
    }
    return roznica;
}


ostream & operator<< (ostream &wyjscie, const Ttime &czas)
{
    return wyjscie<<czas.godziny<<"h "<<czas.minuty<<"min ";
}


operator* (Ttime czas, int n)
{
    Ttime iloraz(0,0);
    iloraz.minuty = czas.minuty * n;
    while (iloraz.minuty >=60)
    {
        iloraz.godziny++;
        iloraz.minuty-=60;
    }
    iloraz.godziny = czas.godziny * n;
}

void Ttime::wyswietl()
{
    cout<<godziny<<"h "<<minuty<<"min. "<<endl;
}
