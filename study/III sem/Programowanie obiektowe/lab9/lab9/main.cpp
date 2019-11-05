#include <iostream>
#include <Ttime.h>

using namespace std;

int main()
{
    Ttime czas(4,15);
    czas.wyswietl();
    Ttime czas2(1,122);
    cout<<"suma = "<<czas + czas2<<endl;
    cout<<"roznica = "<<czas - czas2<<endl;
    cout<<"iloraz = "<<czas * 3<<endl;

    return 0;
}
