#include "Tpunkt.h"

#include <cmath>

Tpunkt::Tpunkt()
{
    cout<<"Utworzono obiekt Tpunkt konstruktorem domyslnym"<<endl;
}

Tpunkt::Tpunkt(float x, float y)
{
    this->x=x;
    this->y=y;
    cout<<"Utworzono obiekt Tpunkt konstruktorem z parametrem"<<endl;
}

Tpunkt::~Tpunkt()
{
    cout<<"Usunieto obiekt Tpunkt"<<endl;
}

void Tpunkt::ruch(float px, float py)
{
    x+=px;
    y+=py;
}

float Tpunkt::getx()
{
    return x;
}

float Tpunkt::gety()
{
    return y;
}



Tkolo::Tkolo(float r)
{
    this->r=r;
    cout<<"Utworzono obiekt Tkolo konstruktorem z parametrem"<<endl;
}

Tkolo::~Tkolo()
{
    cout<<"Usunieto obiekt Tkolo"<<endl;
}

float Tkolo::getr()
{
    return r;
}

bool nalezy(Tpunkt *punkt, Tkolo *kolo)
{
    float s=sqrt(pow(punkt->x,2) + pow(punkt->y,2));
    if (s > kolo->getr()) return false;
    else return true;
}
