#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
///////////////////////////////////////////////////////////////////////////
int horner(vector<int> wsp, int st, int x)
{
    if(st==0) return wsp[0];
    return x*horner(wsp, st-1,x)+wsp[st];
}
int factorial(int i)
{
    if(i == 0 || i == 1)    return 1;
    return factorial(i-1)*i;
}
void zad1()
{
    vector <int> wsp;
    wsp.push_back(1);
    wsp.push_back(0);
    wsp.push_back(0);
    wsp.push_back(-2);
    wsp.push_back(0);
    wsp.push_back(0);
    wsp.push_back(-1);
    wsp.push_back(2);
    int stopien = 8, 
        arg = 2,
        size = wsp.size(), 
        var = 0,
        i = 0;
    while(wsp.size() > 1)
    {
        while(stopien > 0)
        {
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
    i++;
    cout << "W(" << arg << ")" << i << "'  =  " << wsp[wsp.size()-1] * factorial(i)  << endl;
    var ++;
    }
}
///////////////////////////////////////////////////////////////////////////
void zad2()
{
    cout<<"Podaj rozmiar tablicy: ";
    int rozm;
    cin>>rozm;
    vector <int> x;
    vector <int> f;
    int pom;
    double wynik=0.0,punkt,var,z;
    for(int i=0; i<rozm; i++)
    {
        
        if(i>0)
        {
            do
            {
                cout<<"Podaj x"<<i<<": ";
                cin >> pom;
            } while (pom <= x[i-1]);  
        }
        else
        {
            cout<<"Podaj x"<<i<<": ";
            cin >> pom;
        }
        x.push_back(pom);
        cout<<"Podaj f"<<i<<": ";
        cin >> pom;
        f.push_back(pom);
    }
    do
    {
    cout<<"POdaj punkt w ktorym chcesz znac wartosc:";
    cin>>punkt;
    }while(punkt<x[0] || punkt>x[rozm-1]);
    for(int i=0; i<rozm; i++)
    {   
        z = 1;
        for(int j=0; j<rozm; j++)
        {
            if(j!=i)
            {
                var = static_cast<double>(punkt - x[j])/static_cast<double>(x[i]-x[j]);
                z *= var;    
            }       
            
        }
        wynik += f[i]*z;
        
    }
    cout << "wynik = " << wynik << endl;

}
///////////////////////////////////////////////////////////////////////////
void zad3()
{

}
///////////////////////////////////////////////////////////////////////////
void zad4()
{

}
////////////////////////////////////////////////////////
int main()
{
    int choice;
    do
    {
        cout << "Wybierz zadanie 1-3: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                zad1();
                break;
            case 2:
                zad2();
                break;
            case 3:
                zad3();
                break;
            case 4:
                zad4();
                break;
            default:
                break;
        }

    }while(choice != 4);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////
