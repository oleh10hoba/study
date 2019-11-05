#ifndef TDOMOWNIK_H
#define TDOMOWNIK_H
#include <string>

using namespace std;

class Tdomownik
{
    public:
        Tdomownik();
        Tdomownik(string nazwa);
        ~Tdomownik();
        static void setkod();
        static int getkod();
        void wyswietl();
        friend string sasiad(Tdomownik *wsk);
        friend class Tsasiad;

    protected:

    private:
    string nazwa, sekret;
    static int kod;


};




class Tsasiad
{
    public:
        Tsasiad();
        ~Tsasiad();
        void info(Tdomownik *wsk);

    protected:
    string nazwa;

    private:
};

#endif // TDOMOWNIK_H
