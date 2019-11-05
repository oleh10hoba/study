#include "Tdomownik.h"
#include <iostream>
#include <iomanip>

using namespace std;

int Tdomownik::kod;

Tdomownik::Tdomownik()
{
    cout<<"Utworzono obiekt Tdomownik konstruktorem domyslnym"<<endl;
}

Tdomownik::Tdomownik(string nazwa)
{
    this->nazwa=nazwa;
    cout<<"Podaj sekret domownika: "<<nazwa<<": "; getline(cin,sekret);
    cout<<"Utworzono obiekt Tdomownik konstruktorem z parametrem"<<endl;

}

Tdomownik::~Tdomownik()
{
    cout<<"Usunieto obiekt Tdomownik"<<endl;
}

void Tdomownik::setkod()
{
    cout<<"Podaj kod:"; cin>>kod;
}

int Tdomownik::getkod()
{
    return kod;
}

void Tdomownik::wyswietl()
{
    cout<<setw(15)<<nazwa<<setw(30)<<sekret<<setw(5)<<kod<<endl;
}


string sasiad(Tdomownik *wsk)
{
    cout<<"Podaj nowy kod alarmowy: "; cin>>wsk->kod;
    return wsk->sekret;
}







Tsasiad::Tsasiad()
{
    cout<<"Utworzono obiekt Tsasiad konstruktorem domyslnym"<<endl;
}

Tsasiad::~Tsasiad()
{
    cout<<"Usunieto obiekt Tsasiad"<<endl;
}

void Tsasiad::info(Tdomownik *wsk)
{
    cout<<"Ja siasiad "<<nazwa<<" znam sekret domownika "<<wsk->nazwa<<": "<<wsk->sekret<<" i kod do ich domu: "<<wsk->kod<<endl;
}
