#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
///////////////////////////////////////////////////////////////////////////
int sign(float num)
{
    if(num>0) return 1;
    else if(num<0) return -1;
    else return 0;
}
///////////////////////////////////////////////////////////////////////////
void lab1_1()
{
    float a=1e-16, b=10, c=1; 
    float delta = 0;
    delta=pow(b,2) - 4*a*c;
    if(delta >= 0)
    {
        
        if(delta == 0)
        {
            float rozw = -b / (2*a);
            cout << "Poniewaz delta jest rowna zero, to uklad rownan ";
            cout << a <<"x  + " << b <<"y + " << c << " = 0";
            cout << " ma dokladnie jedno rozwiazanie: " << rozw << endl;
        }
        else
        {
            float sqrt_delta = sqrt(delta);
            float rozw1 = (-b + sqrt_delta) / (2*a);
            float rozw2 = (-b - sqrt_delta) / (2*a);
            cout << "Poniewaz delta jest wieksza  od zero, to uklad rownan ";
            cout << a <<"x  + " << b <<"y + " << c << " = 0";
            cout << " ma dokladnie dwa rozwiazania: " << rozw1 << " i " << rozw2 << endl;
        }
        
    }
    else
    {
        cout << "Poniewaz delta jest mniejsza  od zero, to uklad rownan ";
        cout << a <<"x  + " << b <<"y + " << c << " = 0";
        cout << " niema rozwiazan" << endl;
    }
    
    

}
///////////////////////////////////////////////////////////////////////////
void lab1_2()
{
    float a=1e-16,b=10,c=1;
     
    float x1,x2;
    x1 = -b/(2*a) + sign(-b/2/a)*sqrt(pow(b/2/a,2)-c/a);
    x2 = c / (a*x1);
    cout << "x1 = " << x1 <<"   x2 = "<< x2 << endl;


}
///////////////////////////////////////////////////////////////////////////
void lab1_3()
{
    float x = 0.182321556;
    for(int i = 1; i <= 16; i++)
    {
        x = 1.0/i - 5.0*x;
        cout << "i = " << i << " - " << x <<endl;
    }
    cout << endl << endl << "b" <<endl;
    float xx = 0.0098;
    for(int i = 16; i > 0; i--)
    {
        xx = 1/(5.0*i)-1/5.0*xx;
        cout << "i = " << i << " = " << xx << endl;
    }
}
//////////////////////////////////////////////////////////////////////////////
void lab1()
{
    int choice;
    do
    {
        cout << "Lab1:" << endl;
        cout << "Wybierz numer zadania 1-3: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                lab1_1();
                break;
            case 2:
                lab1_2();
                break;
            case 3:
                lab1_3();
                break;
            default:
                break;
        }

    }while(choice != 0);
    
}
///////////////////////////////////////////////////////////////////////////
int horner(vector<int> wsp, int st, int x)
{
    if(st==0) return wsp[0];
    return x*horner(wsp, st-1,x)+wsp[st];
}
void lab2_horner1()
{
    int stopien = 4, arg = 2;
    vector <int> wsp;
    wsp.push_back(1);
    wsp.push_back(2);
    wsp.push_back(-3);
    wsp.push_back(0);
    wsp.push_back(2);
    cout << "W(" << arg << ") =  " << horner(wsp,stopien,arg) << endl;
}
///////////////////////////////////////////////////////////////////////////
void lab2_horner2()
{
    vector <int> wsp;
    wsp.push_back(1);
    wsp.push_back(2);
    wsp.push_back(-3);
    wsp.push_back(0);
    wsp.push_back(2);
    int stopien = 5, 
        arg = 2, 
        i = 4, 
        wyn = 0, 
        size = wsp.size(), 
        var = 0;
    while(wsp.size() > 1)
    {
        while(stopien > 0)
        {
            i = 0;
            stopien --;
            wsp[stopien] = horner(wsp,stopien,arg);
        }
    stopien = wsp.size();    
    if(var != 0)
    {
        wsp.pop_back();
        
    }
    else
    {
        stopien --;
    }
    cout << "W(" << arg << ") =  " << wsp[wsp.size()-1] << endl;
    var ++;
    }
    
}
///////////////////////////////////////////////////////////////////////////
double iloraz_roznicowy(vector <double> x, vector <double> f, const int i, int j)
{
    if(i-1 == j)  return (f[i]-f[j])/(x[i]-x[j]);
    return (iloraz_roznicowy(x,f,i,j+1)-iloraz_roznicowy(x,f,i-1,j))/(x[i]-x[j]);
}
////////////////////////////////////////////////////////////////
double newton(vector <double> x, vector <double> f, int i, double punkt)
{
    double wynik = 1;
    
        wynik *= iloraz_roznicowy(x,f,i,0);
        for(int j=0; j < i; j++)
        {
            wynik *= (punkt-x[j]);
        }
    return wynik;
}
////////////////////////////////////////////////////////
void lab4_newton()
{
    int rozm=4;
    vector <double> x;
    vector <double> f;
    int pom;
    double wynik=0.0,punkt,var=0,z;
    x.push_back(-1);
    f.push_back(1);
    x.push_back(0);
    f.push_back(0);
    x.push_back(4);
    f.push_back(-1);
    x.push_back(5);
    f.push_back(0);
    do
    {
        cout<<"POdaj punkt w ktorym chcesz znac wartosc:";
        cin>>punkt;
    }while(punkt<x[0] || punkt>x[rozm-1]);
    wynik += f[0];
    for(int i=1; i<rozm; i++)
    {   
        wynik += newton(x, f, i, punkt);
    }
    cout << "Wynik interpolacji Newtona w punkcie " <<punkt << " = " <<wynik << endl;
}
/////////////////////////////////////////////////////////////////////////////
struct point
{
    double x;
    double y;
};
void lab5_najmniejszych_kwadratow()
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
}

///////////////////////////////////////////////////////////////////////////
int main()
{
    int choice;
    do
    {
        cout << "Wybierz numer zadania: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                lab1();
                break;
            case 2:
                lab2_horner1();//horner
                break;
            case 3:
                lab2_horner2();//horner
                break;
            case 4:
                lab4_newton();//newton
                break;
            case 5:
                lab5_najmniejszych_kwadratow();//najmniejsze kwadraty
                break;
            default:
                break;
        }

    }while(choice != 0);
    
    return 0;
}
////////////////////////////////////////////////////////////////////////