#include <iostream>
#include <vector>
using namespace std;
///////////////////////////////////////////////////////////////////////////
int horner(vector<int> wsp, int st, int x)
{
    if(st==0) return wsp[0];
    return x*horner(wsp, st-1,x)+wsp[st];
}
void zad1()
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
void zad2()
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
void zad3()
{
    
}
///////////////////////////////////////////////////////////////////////////
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
            default:
                break;
        }

    }while(choice != 0);
    
    return 0;
}