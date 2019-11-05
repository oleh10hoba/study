#ifndef TPUNKT_H
#define TPUNKT_H

#include <iostream>

using namespace std;

class Tkolo;

class Tpunkt
{
    public:
        Tpunkt();
        Tpunkt(float x, float y);
        ~Tpunkt();
        void ruch(float px, float py);
        float getx();
        float gety();

        friend bool nalezy(Tpunkt *punkt, Tkolo *kolo);

    protected:

    private:
    float x,y;
};


class Tkolo
{
        public:
            Tkolo(float r);
            ~Tkolo();
            float getr();

            friend bool nalezy(Tpunkt *wsk);

        private:
            float r;

};
#endif // TPUNKT_H
