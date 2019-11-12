#include <iostream>
#include <vector>
using namespace std;
struct point
{
    double x;
    double y;
};

int main()
{

    int ilosc;
    double wart;
    cout << "Ile jest punkow: ";
    cin >> ilosc;
    vector <point> f(ilosc);
    for(int i = 0; i < f.size(); i++)
    {
        cout << "Podaj x" << i << ": ";
        cin >> f[i].x;
        cout << "Podaj y" << i << ": ";
        cin >> f[i].y;
        if(i != 0)
        {
            if(f[i-1].x >= f[i].x)
            {
                cout << "Niepoprawne dane.\n";
                i--;
            }
        }
    }
    do
    {
        cout << "Podaj obliczana wartosc: ";
        cin >> wart;
    }while(wart<f[0].x || wart > f[f.size()-1].x);
    int A = f.size();
    int B = 0, C = 0, D = 0, E = 0, F = 0;
    double W, W0, W1;
    for(int i = 0; i < f.size(); i++)
    {
        B+=f[i].x;
        C+=f[i].y;
        D+=f[i].x;
        E+=f[i].x * f[i].x;
        F+=f[i].y * f[i].x;
    }

    W = A*E - B*D;
    W0 = C*E - B*F;
    W1 = A*F - C*D;

    cout << "g(x) = " << W0/W << " + ("<< W1/W << ")x\n";
    cout <<"dla " << wart << " jest rowna" <<   W0/W +  (W1/W)* wart;
    return 0;
}
