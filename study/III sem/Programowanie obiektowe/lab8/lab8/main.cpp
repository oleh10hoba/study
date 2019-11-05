#include <iostream>
#include "Tdomownik.h"
#include "Tpunkt.h"
#include <cmath>


using namespace std;

int main()
{
    //ZAD1
    /*
    Tdomownik ojciec("ojciec");
    Tdomownik matka("matka");
    Tdomownik corka("corka");
    Tdomownik::setkod();
    Tsasiad s;
    s.info(&ojciec);
    s.info(&matka);
    s.info(&corka);

    string sekret=sasiad(&ojciec);
    cout<<"sekret to "<<sekret<<endl;
    s.info(&ojciec);
    */

    Tpunkt p(0,3);
    Tkolo k(2.9999);

    if (nalezy(&p, &k)) cout<<"nalezy"<<endl;
    else cout<<"nie nalezy"<<endl;

    float s=sqrt(pow(p.getx(),2) + pow(p.gety(),2));
    if (s <= k.getr()) cout<<"nalezy"<<endl;
    else cout<<"nie nalezy"<<endl;




    return 0;
}
